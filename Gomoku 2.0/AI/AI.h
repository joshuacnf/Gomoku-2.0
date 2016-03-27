#ifndef AI_h
#define AI_h

#include "ChessBoard.h"
#include "TranspositionTable.h"
#include "MoveGenerator.h"
#include "globals.h"

struct AI
{
    ChessBoard B;
    TranspositionTable T;
    MoveGenerator M;
    int X, Y, cnt;
    
    AI(): M(&B) {}
    
    void play(int &x, int &y)
    {
        B.setWhite(x, y);
        M.update(x, y);
        printf("After player put white at %d %d: %lf\n", x, y, B.evaluate());
        cnt = 0;
        double val = alphaBeta(-INF, INF, 1);
        T.clear();
        x = X, y = Y;
        B.setBlack(x, y);
        M.update(x, y);
        printf("After AI put black at %d %d: %lf; Table Cutoffs: %d\n", x, y, val, cnt);
    }
    
    double alphaBeta(double alpha, double beta, int depth)
    {
        if (abs_(B.evaluate()) > 500000000.0)
            return B.evaluate();
        double v = depth & 1? -INF: INF;
        
        double val = T.lookUp(MAX_DEPTH - depth + 1, B.hashValue(), B.keyValue());
        if (val > -INF)
        {
            cnt++;
            return val;
        }
        
        int x, y; double v0;
        while (M.nextMove(x, y))
        {
            v0 = v;
            if (depth & 1)  //Maximum
            {
                if (depth < MAX_DEPTH)
                {
                    setBlack(x, y);
                    v = max_(v, alphaBeta(alpha, beta, depth + 1));
                }
                else
                {
                    B.setBlack(x, y);
                    v = max_(v, B.evaluate());
                }
                alpha = max_(alpha, v);
            }
            else    //Minimum
            {
                if (depth < MAX_DEPTH)
                {
                    setWhite(x, y);
                    v = min_(v, alphaBeta(alpha, beta, depth + 1));
                }
                else
                {
                    B.setWhite(x, y);
                    v = min_(v, B.evaluate());
                }
                beta = min_(beta, v);
            }
            
            if (depth < MAX_DEPTH)
                rollBack(x, y);
            else B.rollBack(x, y);
            
            if (v > v0 && depth == 1) X = x, Y = y;
            if (alpha >= beta) break;
        }
        
        T.update(v, MAX_DEPTH - depth + 1, B.hashValue(), B.keyValue());
        return v;
    }
    
    inline void setBlack(const int &x, const int &y)
    {
        B.setBlack(x, y);
        M.update();
    }
    
    inline void setWhite(const int &x, const int &y)
    {
        B.setWhite(x, y);
        M.update();
    }
    
    inline void rollBack(const int &x, const int &y)
    {
        B.rollBack(x, y);
        M.rollBack();
    }
};

#undef MAX_DEPTH
#undef INF
#undef TABLE_SIZE
#undef BOARD_SIZE
#undef BLANK
#undef WHITE
#undef BLACK

#endif /* AI_h */
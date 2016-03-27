#ifndef ChessBoard_h
#define ChessBoard_h

#include <stack>
#include "globals.h"
#include "utilities.h"

using namespace std;

struct ChessBoard
{
    ull hash, key; double val;
    int A[BOARD_SIZE][BOARD_SIZE];
    
    ChessBoard(): val(0)
    {
        memset(A, 0, sizeof(A));
        for (int i = 0; i < BOARD_SIZE; i++)
            for (int j = 0; j < BOARD_SIZE; j++)
            {
                hash ^= hash_rand[i][j][BLANK];
                key ^= key_rand[i][j][BLANK];
            }
    }
    
    inline ull hashValue()
    {
        return hash;
    }
    
    inline ull keyValue()
    {
        return key;
    }
    
    inline double evaluate() const
    {
        return val;
    }
    
    inline void setWhite(const int &x, const int &y)
    {
        hash ^= hash_rand[x][y][BLANK] ^ hash_rand[x][y][WHITE];
        key ^= key_rand[x][y][BLANK] ^ key_rand[x][y][WHITE];
        A[x][y] = -1;
        change_(x, y, -1);
    }
    
    inline void setBlack(const int &x, const int &y)
    {
        hash ^= hash_rand[x][y][BLANK] ^ hash_rand[x][y][BLACK];
        key ^= key_rand[x][y][BLANK] ^ key_rand[x][y][BLACK];
        A[x][y] = 1;
        change_(x, y, 1);
    }
    
    inline void rollBack(const int &x, const int &y)
    {
        int color = A[x][y] == 1? BLACK: WHITE;
        hash ^= hash_rand[x][y][color] ^ hash_rand[x][y][BLANK];
        key ^= key_rand[x][y][color] ^ key_rand[x][y][BLANK];
        A[x][y] = 0;
        remove_();
    }
    
    inline bool isBlank(const int &x, const int &y)
    {
        if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE)
            return false;
        return !A[x][y];
    }
    
    
private:
    stack<double> S;
    DataBase db; int check;
    const int five = (0x3ff << 4), six = (0xfff << 2), seven = (0x3fff);
    inline double f__(const int &i, const int &j, const int &color, const int &type){
        double ans = 0;
        A[i][j] = type;
        for(int k = 0; k < 4; k++){
            check = 0;
            for(int it = -6; it <= 6; it++){
                if(A[i + it * dx[k]][j + it * dy[k]] == -color || max_(i + it * dx[k], j + it * dy[k])>14 || min_(i + it * dx[k], j + it * dy[k]) < 0) check |= 2;
                else if(A[i + it * dx[k]][j + it * dy[k]] == color) check |= 1;
                check <<= 2;
            }
            check >>= 2;
            for(int k = 0; k <= 12; k += 2)
            {
                ans += db.a[(((seven << k) & check) >> k)];
                if(k == 12) continue;
                ans += db.b[(((six << k) & check) >> k) >> 2];
                if(k == 10) continue;
                ans += db.c[(((five << k) & check) >>k ) >> 4];
            }
        }
        return ans;
    }
    
    inline double change_(const int &i, const int &j, const int &color){
        double d = 0, coe_b, coe_w;
        if(color == 1) coe_b = 1.0, coe_w = 5.0;
        else if(color == -1) coe_b = 5.0, coe_w = 1.0;
        d += coe_b * color * f__(i, j, color, color);
        d += coe_w * color * (f__(i, j, -color, 0) - f__(i, j, -color, color));
        val += d;
        S.push(val);
        return d;
    }
    
    inline double remove_(){
        S.pop();
        val = S.top();
        return val;
    }
};

#endif /* ChessBoard_h */
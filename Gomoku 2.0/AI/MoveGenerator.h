#ifndef MoveGenerator_h
#define MoveGenerator_h

#include <list>
#include <stack>
#include <cstring>
#include "globals.h"
#include "ChessBoard.h"

using namespace std;

struct MoveGenerator
{
    typedef FastList::node node;
    
    node *it;
    FastList seq;
    stack<node*> tailS, itS;
    ChessBoard *B;
    
    inline MoveGenerator(ChessBoard *B_): B(B_) {}
    
    inline bool nextMove(int &x, int &y)
    {
        do{
            it = it->next;
        }while(it && it->flag);
        
        if (!it) return false;
        x = it->x, y = it->y;
        return true;
    }
    
    inline void update(const int &x, const int &y)
    {
        addMoves(x, y);
        removeMove(x, y);
        it = seq.head;
    }
    //update move sequence after player or AI plays a move
    
    inline void update()
    {
        it->flag = true;
        itS.push(it);
        tailS.push(addMoves(it->x, it->y));
        it = seq.head;
    }
    //update move sequence before expanding a node
    
    inline node* addMoves(const int &x0, const int &y0)
    {
        int x, y;
        node *tail = 0;
        for (int k = 0; k < 8; k++)
        {
            x = x0 + dx[k], y = y0 + dy[k];
            if((!B->isBlank(x, y)) || seq.inSeq(x, y)) continue;
            seq.insert(x, y);
            tail = tail? tail: seq.head;
        }
        return tail;
    }
    //add moves to the move sequence based on (x0, y0)
    //return the number of moves added
    
    inline void removeMove(const int &x0, const int &y0)
    {
        seq.erase(seq.search(x0, y0));
    }
    //remove (x0, y0) from sequence
    
    inline void rollBack()
    {
        node *tail = tailS.top(); tailS.pop();
        seq.dispose(tail);
        it = itS.top(); it->flag = false; itS.pop();
    }
    //rollback move sequence after finishing expanding a node
};

#endif /* MoveGenerator_h */

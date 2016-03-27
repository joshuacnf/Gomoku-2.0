#ifndef TranspositionTable_h
#define TranspositionTable_h

#include <cstring>
#include "globals.h"

struct TranspositionTable
{
    struct node
    {
        double val; ui h;   //value & valid height
        ull key; node *next;
        
        inline node(): val(0), key(0), next(0) {}
        inline node(const double &val_, const ui &h_, const ull &key_)
        :val(val_), h(h_), key(key_) {}
    };
    
    node *T[TABLE_SIZE];
    node A[TABLE_SIZE << 1]; int A_it = 0;
    
    TranspositionTable()
    {
        memset(T, 0, sizeof(T));
    }
    
    inline double lookUp(const ui &height, const ull &hash, const ull &key)
    {
        int k = hash % TABLE_SIZE;
        node *u = search(k, key);
        if (!u) return -INF;
        if (u->h < height) return -INF;
        return u->val;
    }
    
    inline void update(const double &val, const ui &height, const ull &hash, const ull &key)
    {
        int k = hash % TABLE_SIZE;
        node *u = search(k, key);
        if (!u)
        {
            node *v = newNode(val, height, key);
            v->next = T[k]; T[k] = v;
            return;
        }
        if (u->h < height)
            u->val = val, u->h = height;
    }
    
    inline void clear()
    {
        A_it = 0;
        memset(T, 0, sizeof(T));
    }
    
    inline node *newNode(const double &val, const ui &height, const ull &key)
    {
        if (A_it < (TABLE_SIZE << 1))
        {
            node *u = &A[A_it++];
            u->val = val, u->h = height; u->key = key;
            return u;
        }
        return new node(val, height, key);
    }
    
    inline node *search(const int &k, const ull &key)
    {
        for (node *p = T[k]; p; p = p->next)
            if (p->key == key)
                return p;
        return 0;
    }
};

#endif /* TranspositionTable_h */

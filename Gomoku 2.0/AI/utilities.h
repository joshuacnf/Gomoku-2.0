#ifndef utilities_h
#define utilities_h

#import <Foundation/Foundation.h>
#include "globals.h"

template <typename T> inline T min_(const T &x,const T &y)  { return x < y? x: y; }
template <typename T> inline T max_(const T &x,const T &y)  { return x > y? x: y; }
template <typename T> inline T abs_(const T &x) { return x > 0? x: -x; }
template <typename T> inline void swap_(T &x, T &y)    { T z = y; y = x; x = z; }

struct DataBase
{
    double a[1 << 14];
    double b[1 << 12];
    double c[1 << 10];
    DataBase(){
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        int n, s; double v;
        NSString *nodePath = [[NSBundle mainBundle] pathForResource: @"database" ofType: @"txt"];
        FILE* Fin = fopen([nodePath UTF8String],"r");
        while (fscanf(Fin,"%d %d %lf\n", &n, &s, &v) > 0)
        {
            switch (n)
            {
                case 5: c[s] = v; break;
                case 6: b[s] = v; break;
                case 7: a[s] = v;
            }
        }
    }
};


struct FastList
{
public:
    struct node
    {
        int x, y;
        bool flag; node *next;
        
        inline node(): x(0), y(0), flag(0), next(0) {}
        inline node(const int &x_, const int &y_): x(x_), y(y_), flag(0), next(0) {}
    };
    
    node *head;
    bool inS[BOARD_SIZE][BOARD_SIZE];
    
    FastList(): head(0)
    {
        memset(inS, 0, sizeof(inS));
    }
    
    inline bool inSeq(const int &x, const int &y)
    {
        return inS[x][y];
    }
    
    inline node* insert(const int &x, const int &y)
    {
        node *p = pond.newNode(x, y);
        p->next = head; head = p;
        inS[x][y] = true;
        return head;
    }
    
    inline void dispose(node *v)
    {
        if (!v) return;
        for (node *p = head; p != v->next; p = p->next)
        {
            pond.dispose(p);
            inS[p->x][p->y] = false;
        }
        head = v->next;
    }   //dispose all nodes before v, inclusive
    
    inline void erase(node *v)
    {
        if (!v) return;
        swap_(head->x, v->x);
        swap_(head->y, v->y);
        dispose(head);
    }   //erase node v
    
    inline node* search(const int &x, const int &y)
    {
        node *p = 0;
        for (p = head; p; p = p->next)
            if (p->x == x && p->y == y)
                break;
        return p;
    }
    
private:
    
    struct MemoryPond
    {
        int i, j;
        node pond[MAXN]; node *stack_[MAXN];
        MemoryPond(): i(0), j(0) {}
        
        inline node *newNode(const int &x, const int &y)
        {
            node *v;
            if(!j)
                v = &pond[i++];
            else v = stack_[j--];
            v->x = x, v->y = y; v->flag = 0;
            return v;
        }
        
        inline void dispose(node* v)
        {
            stack_[++j] = v;
        }
    };

    MemoryPond pond;
};

#endif /* utilities_h */

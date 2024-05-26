#include <iostream>

const int MAX = 400;

class Edge 
{
    public:
        typedef struct EdgeS
        {
            int u;
            int v;
            int w;
        } EdgeS_t;

        // Constructor
        Edge () {}
};

class EdgeList : public Edge
{
    public:
        typedef struct EdgeListS
        {
            EdgeS_t data[MAX];
            int n;
        } EdgeListS_t;

        EdgeList () {}
        EdgeList (int n) : n (n) {}

        void kruskal ();
        int find (int belongs[], int vertexNum);
        void unionV (int belongs[], int c1, int c2);
        void sort ();
        void print ();

        ~EdgeList () {}

            EdgeListS_t elist;
            EdgeListS_t spanlist;
            int Graph[MAX][MAX];
            int V, u, v;
            int n;
};
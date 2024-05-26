#include <stdio.h>

#define MAX 400

typedef struct Edge 
{
    int u;
    int v;
    int w;
} Edge_t;

typedef struct EdgeList
{
    Edge_t data[MAX];
    int n;
} EdgeList_t;

EdgeList_t elist;

int Graph[MAX][MAX];
int n;
EdgeList_t spanList;

void kruskal ();
int find (int belongs[], int vertexNum);
void unionV (int belong[], int c1, int c2);
void sort ();
void print ();

main ()
{
    int V, u, v;
    int j = 0;

    FILE *ptr;
     ptr = fopen ("data.txt","r");

     if (ptr == NULL)
     {
        printf ("File was not read \n");
     }

     while (fscanf (ptr, "%d %d %d", &v, &V, &u) == 3)
     {
        j++;

        Graph[j][0] = V;
        Graph[j][1] = u;
        Graph[j][2] = v;
     }

     printf ("TEST \n");

    n = 344;

    kruskal ();
    print ();

    return 0;
}

void kruskal ()
{
    int belongs[MAX];
    int cno1, cno2;

    elist.n = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (Graph[i][j] != 0)
            {
                elist.data[elist.n].u = i;
                elist.data[elist.n].v = j;
                elist.data[elist.n].w = Graph[i][j];
                elist.n++;
            }
        }
    }

    sort ();

    for (int i = 0; i < n; i++)
    {
        belongs[i] = i;
    }

    spanList.n = 0;

    for (int i = 0; i < elist.n; i++)
    {
        cno1 = find (belongs, elist.data[i].u);
        cno2 = find (belongs, elist.data[i].v);

        if (cno1 != cno2)
        {
            spanList.data[spanList.n] = elist.data[i];
            spanList.n = spanList.n + 1;
            unionV (belongs, cno1, cno2);
        }
    }
}

int find (int belongs[], int vertexNum)
{
    return (belongs[vertexNum]);
}

void unionV (int belongs[], int c1, int c2)
{
    for (int i = 0; i < n; i++)
    {
        if (belongs[i] == c2)
        {
            belongs[i] = c1;
        }
    }
}

void sort ()
{
    Edge_t temp;

    for (int i = 1; i < elist.n; i++)
    {
        for (int j = 0; j < elist.n - 1; j++)
        {
            if (elist.data[j].w > elist.data[j + 1].w)
            {
                temp = elist.data[j];
                elist.data[j] = elist.data[j + 1];
                elist.data[j + 1] = temp;
            }
        }
    }
}

void print ()
{
    int cost = 0;
    for (int i = 0; i < spanList.n; i++)
    {
        printf ("\n%d - %d : %d", spanList.data[i].u, spanList.data[i].v, spanList.data[i].w);

        cost = cost + spanList.data[i].w;
    }

    printf ("\nSpanning tree cost: %d \n", cost);
}

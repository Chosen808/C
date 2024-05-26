#include "kruskal.h"
#include <iostream>

void EdgeList::kruskal ()
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

    spanlist.n = 0;

    for (int i = 0; i < elist.n; i++)
    {
        cno1 = find (belongs, elist.data[i].u);
        cno2 = find (belongs, elist.data[i].v);

        if (cno1 != cno2)
        {
            spanlist.data[spanlist.n] = elist.data[i];
            spanlist.n = spanlist.n + 1;
            unionV (belongs, cno1, cno2);
        }
    }
}

int EdgeList::find (int belongs[], int vertexNum)
{
    return (belongs[vertexNum]);
}

void EdgeList::unionV (int belongs[], int c1, int c2)
{
    for (int i = 0; i < n; i++)
    {
        if (belongs[i] == c2)
        {
            belongs[i] = c1;
        }
    }
}

void EdgeList::sort ()
{
    EdgeS_t temp;

    for (int i = 1; i < elist.n; i++)
    {
        for (int j = 0; j < elist.n -1; j++)
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

void EdgeList::print ()
{
    int cost = 0;

    for (int i = 0; i < spanlist.n; i++)
    {
        std::cout << "\n" << spanlist.data[i].u << " - " << spanlist.data[i].v << " : " << spanlist.data[i].w;

        cost = cost + spanlist.data[i].w;
    }

    std::cout << "\nSpanning tree cost: " << cost << "\n";
}
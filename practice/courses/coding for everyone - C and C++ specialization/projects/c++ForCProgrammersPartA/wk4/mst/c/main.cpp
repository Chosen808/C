#include "kruskal.h"
#include <iostream>

main ()
{
    EdgeList graph;
    int j = 0;

    FILE *ptr;

    ptr = fopen ("data.txt", "r");

    if (ptr == NULL)
    {
        std::cout << "File was not read \n";
    }

    while (fscanf (ptr, "%d %d %d", &graph.v, &graph.V, &graph.u) == 3)
    {
        j++;

        graph.Graph[j][0] = graph.V;
        graph.Graph[j][1] = graph.u;
        graph.Graph[j][2] = graph.v;
    }

    graph.n = 344;

    graph.kruskal ();
    graph.print ();

    return 0;
}
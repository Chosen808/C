#include "dijkstras.h"
#include <iostream>


main ()
{


    /*int vertices[8][4] = {
        {a, b, 4},
        {a, c, 4},
        {b, c, 2},
        {c, d, 6},
        {d, e, 5},
        {d, f, 7},
        {f, g, 3}
    };*/

    // Graph, vertices and vertices, G = ({a,b,c...n}, {a,b}, {a,c}...{n,n})
    int graph[SIZE][SIZE] = {
        {'a', 'b', 'c', 'd', 'e', 'f', 'g', -1},
        {'a', 'b', 4},
        {'a', 'c', 4},
        {'b', 'c', 2},
        {'c', 'd', 6},
        {'d', 'e', 5},
        {'d', 'f', 7},
        {'f', 'g', 3},
        {-1, -1, -1}
    };

    std::cout << "This graph has " << Graph::vertices (graph) << " vertices \n";
    std::cout << "This graph has " << Graph::edges (graph) << " edges \n";
    
    Graph::adjacent (graph, 'a', 'b');
    Graph::adjacent (graph, 'd', 'e');

    Graph::neighbors (graph, 'a');
    Graph::neighbors (graph, 'b');

    Graph::add (graph, 'd', 'g');
    Graph::setEdgeValue (graph, 'd', 'g', 8);
    Graph::adjacent (graph, 'd', 'g');
    std::cout << "The value of edge {d, g} is " << Graph::getEdgeValue (graph, 'd', 'g') << "\n";

    std::cout << "The value os vertex e is " << Graph::getVertexValue (graph, 'e') << "\n";
    Graph::setVertexValue (graph, 'e', 'r');
    
/*
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            std::cout << "graph[" << i << "]" << "[" << j << "] = " << graph[i][j] << "\n";

            if (graph[i][j] == -1)
            {
                std::cout << "i = " << i - 1 << "\n";

                break;
            }
        }
    }*/

    
/*
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "graph[" << i << "]" << "[" << j << "] = " << graph[i][j] << "\n";

            if (graph[i][j] == -1)
            {
                std::cout << "i = " << i - 1 << "\n";

                break;
            }
        }
    }
*/
    

/*
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "graph[" << i << "]" << "[" << j << "] = " << graph[i][j] << "\n";

            if (graph[i][j] == -1)
            {
                std::cout << "i = " << i - 1 << "\n";

                break;
            }
        }
    }*/


    return 0;
}

int path (int graph[][SIZE], int x, int y)
{
    int vertex = 0;
    int edgeValue[SIZE];
    int k = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (i == 0)
            {
                continue;
            }
            if (i != 0)
            {
                if (graph[i][j] == x)
                {
                    if (graph[i][1] != y)
                    {
                        vertex = graph[i][1];
                        edgeValue[k] = graph[i][2];
                        k++;

                        if (graph[i][0] == vertex)
                        {
                            vertex = graph[i][1];
                            edgeValue[k] = graph[i][2];
                        }
                    }
                }
            }
        }
    }
}
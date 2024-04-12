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

    std::cout << "The value of edge {d, f} is " << Graph::getEdgeValue (graph, 'd', 'f') << "\n";

    printf ("Vertices = %d \n", Graph::vertices (graph));

    printf ("Edges = %d \n", Graph::edges (graph));

    int val = Graph::adjacent (graph, 'a', 'f');

    std::cout << "Val = " << val << "\n";

    Graph::neighbors (graph, 'a');

    Graph::add (graph, 'e', 'f');
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
    Graph::setEdgeValue (graph, 'e', 'f', 7);

    std::cout << "Add function here \n";
    Graph::add (graph, 'b', 'g');
    std::cout << "Add function was called \n";

    std::cout << "Edge {b, g} value has been set to " << Graph::setEdgeValue (graph, 'b', 'g', 6) << "\n";

    std::cout << "Adjacent function call here \n";
    Graph::adjacent (graph, 'e', 'f');

    Graph::adjacent (graph, 'd', 'f');

    Graph::del (graph, 'f', 'g');

    //printf ("%c %c %d \n", graph[1][0], graph[1][1], graph[1][2]);

    std::cout << "The vertex value of a is " << Graph::getVertexValue (graph, 'a') << "\n";
    std::cout << "The vertex value of v is " << Graph::getVertexValue (graph, 'v') << "\n";

    Graph::setVertexValue (graph, 'c', 'l');

    Graph::neighbors (graph, 'l');

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

    std::cout << "The edge {d, f} value is " << Graph::getEdgeValue (graph, 'd', 'f') << "\n";


    return 0;
}

/*
// This function returns the number of vertices in the graph
int vertices (int graph[][SIZE])
{
    int vertices = 0;

    for (int i = 0; i < SIZE; i++)
    {
        graph[0][i];

        if (graph[0][i] == -1)
        {
            vertices = i;
        }
    }

    return vertices;
}

// This function returns the numbers of edges
int edges (int graph[][SIZE])
{
    int edges = 0;

    for (int i = 1; i < SIZE; i++)
    {
        graph[i][0];

        if (graph[i][0] == -1)
        {
            edges = i - 1;
        }
    }

    return edges;
}

// This function checks for the adjacency of vertices
int adjacent (int graph[][SIZE], int x, int y)
{
    int vertexX = 1;
    int vertexY = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            graph[i][j];

            if (i == 0)
            {
                continue;
            }

            else if (i != 0)
            {

                if (graph[i][j] == x)
                {
                    vertexX = i;
                }

                if (graph[i][j] == y)
                {
                    vertexY = i;
                }

                if (vertexX == vertexY)
                {
                    printf ("There is an edge between %c and %c \n", x, y);

                    return 0;
                }
            }
        }
    }

    printf ("There is no edge between %c and %c \n", x, y);

    return 1;
}

// This function list all veritces that are neighbors to x
int neighbors (int graph[][SIZE], int x)
{
    int arr[40];
    int k = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            graph[i][j];

            if (i == 0)
            {
                continue;
            }

            else if (i != 0)
            {
                if (graph[i][j] == x)
                {
                    if (graph[i][0] == x)
                    {
                        arr[k] = graph[i][1];
                        k++;
                    }

                    else if (graph[i][1] == x)
                    {
                        arr[k] = graph[i][0];
                        k++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf ("%c, ", arr[i]);
    }

    printf ("are neighbors of %c \n", x);
}

// This function will create an vertex from x to y
int add (int graph[][SIZE], int x, int y)
{
    if (dGraph::adjacent (graph, x, y) == 1)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (i == 0)
                {
                    continue;
                }

                else if (i != 0)
                {
                    if (graph[i][j] == -1)
                    {
                        graph[i][0] = x;
                        graph[i][1] = y; 
                        graph[i][2] = 0; 

                        graph[i + 1][0] = -1;
                        graph[i + 1][1] = -1;
                        graph[i + 1][2] = -1;

                        return 0;
                    }
                }
            }
        }
    }    
}

// This function will set a value associated to vertex (x, y) to v
int setEdgeValue (int graph[][SIZE], int x, int y, int v)
{
    int vertexX = 1;
    int vertexY = 0;

    if (dGraph::adjacent (graph, x, y) == 0)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                graph[i][j];

                if (i == 0)
                {
                    continue;
                }

                else if (i != 0)
                {

                    if (graph[i][j] == x)
                    {
                        vertexX = i;
                    }

                    if (graph[i][j] == y)
                    {
                        vertexY = i;
                    }

                    if (vertexX == vertexY)
                    {
                        graph[i][2] = v;

                        std::cout << graph[i][2] << "\n";

                        return 0;
                    }
                }
            }
        }
    }    
}

// Remove edges from x to y, if there is one
int del (int graph[][SIZE], int x, int y)
{
    int vertexX = 1;
    int vertexY = 0;

    if (dGraph::adjacent (graph, x, y) == 0)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                graph[i][j];

                if (i == 0)
                {
                    continue;
                }

                else if (i != 0)
                {
                    if (graph[i][j] == x)
                    {
                        vertexX = i;
                    }

                    if (graph[i][j] == y)
                    {
                        vertexY = i;
                    }

                    if (vertexX == vertexY)
                    {
                        for (int i = vertexX, j = vertexX + 1; i < SIZE, j < SIZE; i++, j++)
                        {
                            graph[i][0] = graph[j][0];
                            graph[i][1] = graph[j][1];
                            graph[i][2] = graph[j][2];

                            if (graph[i][0] == -1)
                            {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
}

// Returns the value associated with the vextex x
int getVertexValue (int graph[][SIZE], int x)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            graph[i][j];

            if (i > 0)
            {
                return 0;
            }

            else if (i == 0)
            {
                if (graph[i][j] == -1)
                {
                    printf ("There is no vertex %c \n", x);
                    return 0;
                }

                if (graph[i][j] == x)
                {
                    printf ("Vertex %c value is %d \n", x, graph[i][j]);

                    return 0;
                }
            }
        }
    }
}


// Sets the value associated with the node x to a
int setVertexValue (int graph[][SIZE], int x, int a)
{
    int k = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            graph[i][j];

            if (i < 1)
            {
                if (graph[i][j] == -1)
                {
                    printf ("There is no vertex %c \n", x);

                    return 0; 
                }

                if (graph[i][j] == x)
                {
                    graph[i][j] = a;

                    break;
                }
            }

            if (graph[i][j] == x)
            {
                graph[i][j] = a;

                k++;
            }

            else if (graph[i][0] == -1 && k == 0)
            {
                printf ("The vertex %c is not in the list \n", x);

                return 0;
            }

            else if (graph[i][j] == -1)
            {
                return 0;
            }
        }
    }
}

// Returns the value associated to edge (x, y)
int getEdgeValue (int graph[][SIZE], int x, int y)
{
    if (dGraph::adjacent (graph, x, y) == 0)
    {
        int vertexX = 1;
        int vertexY = 0;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                graph[i][j];

                if (i == 0)
                {
                    continue;
                }

                else if (i != 0)
                {

                    if (graph[i][j] == x)
                    {
                        vertexX = i;
                    }

                    if (graph[i][j] == y)
                    {
                        vertexY = i;
                    }

                    if (vertexX == vertexY)
                    {
                        std::cout << graph[vertexX][2] << "\n";

                        return 0;
                    }
                }
            }
        }
    }
}*/

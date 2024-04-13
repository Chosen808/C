#include "dijkstras.h"
#include <iostream>

// Returns the number of vertices in the graph
int Graph::vertices (int graph[][SIZE])
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

// Returns the number of edges in the graph
int Graph::edges (int graph[][SIZE])
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

// Test whether there is an edge from node x to y
int Graph::adjacent (int graph[][SIZE], int x, int y)
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

/*
Test whether there is an edge from node x to y : class dGraph does not include the print 
statements in class Graph
*/
int dGraph::adjacent (int graph[][SIZE], int x, int y)
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
                    return 0;
                }
            }
        }
    }

    return 1;
}

// List all nodes y such that there is an edge from x to y
void Graph::neighbors (int graph[][SIZE], int x)
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

// Adds to Graph the edge from x to y, if there is none
int Graph::add (int graph[][SIZE], int x, int y)
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

// Sets the value associated to the edge (x, y) to v
int Graph::setEdgeValue (int graph[][SIZE], int x, int y, int v)
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

                        return graph[i][2];
                    }
                }
            }
        }
    }
}

// Removes the edge from x to y, if there is one
int Graph::del (int graph[][SIZE], int x, int y)
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
                        graph[i][0] = graph[j][0];
                        graph[i][1] = graph[j][1];
                        graph[i][2] = graph[j][2];

                        if (graph[i][0] = -1)
                        {
                            return 0;
                        }
                    }
                }
            }
        }
    }
}

// Returns the value associated with the node x
int Graph::getVertexValue (int graph[][SIZE], int x)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            graph[i][SIZE];

            if (i > 0)
            {
                return 0;
            }

            else if (i == 0)
            {
                if (graph[i][j] == -1)
                {
                    return NULL;
                }

                if (graph[i][j] == x)
                {
                    return graph[i][j];
                }
            }
        }
    }
}

// Sets the value associated with the node x to a
int Graph::setVertexValue (int graph[][SIZE], int x, int a)
{
    int k = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            graph[i][j];

            if (i == 0)
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
int Graph::getEdgeValue (int graph[][SIZE], int x, int y)
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
                        return graph[vertexX][2];
                    }
                }
            }
        }
    }
}


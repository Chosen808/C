#include "dijkstras.h"
#include <iostream>

int path (int graph[][SIZE], int sourceV, int arr[], int *size);
int path2 (int graph[][SIZE], int sourceU, int arr[], int *size);


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
        // Vertices
        {'a', 'b', 'c', 'd', 'e', 'f', 'g', -1},
        // Edges
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
    Graph::setVertexValue (graph, 'e', 'r');*/
    
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

    int arr[5];
    int num = 0;

    dGraph::degrees (graph, 'f', arr, &num);

    for (int i = 0; i < num; i++)
    {
        printf ("arr[%d] = %c \n", i, arr[i]);
    }

    int g[15];
    int n = 0;

    path (graph, 'a', g, &n);

    for (int i = 0; i < n; i++)
    {
        printf ("g[%d] = %d \n", i, g[i]);
    }

    //std::cout << "The edge b-a value is " << Graph::getEdgeValue (graph, 'a', 'b') << "\n";

    //path2 (graph, 'a', arr, &n);


    return 0;
}

int path (int graph[][SIZE], int sourceV, int arr[], int *size)
{
    int dist[SIZE]; // distance of edges
    dist[0] = sourceV;  // the first index will be set to the source vertex
    int nV[10]; // 
    nV[0] = sourceV;
    int num;
    int u = sourceV;
    //u[0] = sourceV;
    int v;
    int l = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //u[j] = nV[j];
            //printf ("u = %c \n", u);

            if (i == 0)
            {
                continue;
            }
            
            else if (i != 0)
            {
                //if (graph[i][0] == u)
                //{
                    //std::cout << "i = " << i << " j = " << j << "\n";
                    dGraph::degrees (graph, u, nV, &num);
                    
                    for (int k = 0; k < num; k++)
                    {
                        //std::cout << "l = " << l << "\n";
                        printf ("nV[%d] = %c \n", k, nV[k]);
                        printf ("u last = %c \n", u);
                        dist[l] = Graph::getEdgeValue (graph, u, nV[k]);
                        std::cout << "Edge Values " << Graph::getEdgeValue (graph, u, nV[k]) << " l = "<< l <<"\n";
                        l++;
                        //std::cout << "l = " << l << "\n";
                    }
                //}
                    
            }

            u = nV[j];
            if (graph[i][0] == nV[j])
            {
                //u = nV[j];
            }

            if (graph[i][0] == -1)
            {
                break;
            }
            
        }
    }

    for (int i = 0; i < l; i++)
    {
        //printf ("dist[%d] = %d \n", i, dist[i]);
        arr[i] = dist[i];
    }

    *size = l;

}

int path2 (int graph[][SIZE], int sourceU, int arr[], int *size)
{
    int edgeList[15];
    int l = 0;

    for (int i = 0; i < 8; i++)
    {
        if (i == 0)
        {
            continue;
        }

        if (graph[i][0] == -1)
        {
            break;;
        }

        edgeList[l] = graph[i][0];
        l++;
    }


}
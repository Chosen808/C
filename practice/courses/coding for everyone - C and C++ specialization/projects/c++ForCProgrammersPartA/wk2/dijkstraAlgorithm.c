#include <stdio.h>

#define INFINITY 9999
#define MAX 10

void dijkstra (int G[MAX][MAX], int n, int startNode);


main ()
{
    int G[MAX][MAX], i, j, numberNode, startNode;

    printf ("Enter the number of vertices (nodes): ");
    scanf ("%d", &numberNode);

    printf ("\nEnter the adjacency matrix \n");

    for (i = 0; i < numberNode; i++)
    {
        for (j = 0; j < numberNode; j++)
        {
            scanf ("%d", G[i][j]);
        }
    }

    printf ("\nEnter the starting node: ");
    scanf ("%d", startNode);

    dijkstra (G, numberNode, startNode);

    return 0;
}

void dijkstra (int G[MAX][MAX], int numberNode, int startNode)
{
    int cost[MAX][MAX], distance[MAX], pred[MAX], visited[MAX];
    int count, miniDistance, nextNode, i, j;

    // Creating cost maxtrix
    for (i = 0; i < numberNode; i++)
    {
        for (j = 0; j < numberNode; j++)
        {
            if (G[i][j] == 0)
            {
                cost[i][j] = INFINITY;
            }

            else cost[i][j] = G[i][j];
        }
    }

    // Initializing pred[], distance[] and visited[]
    for (i = 0; i < numberNode; i++)
    {
        distance[i] = cost[startNode][i];
        pred[i] = startNode;
        visited[i] = 0;
    }

    distance[startNode] = 0;
    visited[startNode] = 1;
    count = 1;

    while (count < numberNode - 1)
    {
        miniDistance = INFINITY;

        // Next node give the at minimum distance
        for (i = 0; i < numberNode; i++)
        {
            if (distance[i] < miniDistance && !visited[i])
            {
                miniDistance = distance[i];
                nextNode = i;
            }
        }

        // Check if a better path exists through nextNode
        visited[nextNode] = 1;

        for (i = 0; i < nextNode; i++)
        {
            if (!visited[i])
            {
                if (miniDistance + cost[nextNode][i] < distance[i])
                {
                    distance[i] = miniDistance + cost[nextNode][i];
                    pred[i] = nextNode;
                }
            }
        }

        count++;
    }

    // Printing the distance
    for (i = 0; i < numberNode; i++)
    {
        if (i != startNode)
        {
            printf ("\nDistance of node%d = %d", i, distance[i]);
            printf ("\nPath = %d \n", i);

            j = i;

            do 
            {
                j = pred[j];

                printf ("<- %d", j);
            } while (j != startNode);
        }
    }
}
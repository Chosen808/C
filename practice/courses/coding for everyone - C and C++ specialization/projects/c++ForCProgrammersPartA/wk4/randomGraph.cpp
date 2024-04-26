#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

double prob ()
{
    return (static_cast<double>(rand ()/ RAND_MAX));
}


main ()
{
  int size = 15;
  double density;

  std::cout << "Graph size? \n";
  std::cin >> size;

  std::cout << "Graph density (0, 1)? \n";
  std::cin >> density;

  bool **graph;
  int **color;
  int **cost;

  srand (time (0)); // seed random number generator

  graph = new bool*[size];
  color = new int*[size];
  cost = new int*[size];

  for (int i = 0; i < size; ++i)
  {
    graph[i] = new bool[size];
    color[i] = new int[size];
    cost[i] = new int[size];
  }

  for (int i = 0; i < size; ++i)
  {
    for (int j = i; j < size; ++j)
    {
        if (i == j)
        {
            graph[i][j] = false;    // no loops
        }

        else 
        {
            graph[i][j] = graph[i][j] = (prob () < density);
        }
    }
  }

  for (int i = 0; i < size; ++i)
  {
    for (int j = i; j < size; ++j)
    {
        if (graph[i][j])
        {
            color[i][j] = color[i][j] = rand () % 3;
            cost[i][j] = cost[i][j] = prob () * 30;
        }
    }
  }

  std::ofstream outp("graph_data.txt");
  outp << size << "\n";

  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; ++j)
    {
        if (graph[i][j])
        {
            outp << i << "\t" << j << "\t" << cost[i][j] << "\t" << color[i][j] << "\t";
        }
    }
  }

  std::cout << prob () << "\n";

  return 0;  
}
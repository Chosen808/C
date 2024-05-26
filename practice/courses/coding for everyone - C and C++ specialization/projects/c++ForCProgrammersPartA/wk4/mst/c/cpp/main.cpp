#include "kruskal.h"
#include <iostream>
#include <bits/stdc++.h>

/*

PLEASE RUN THE COMMAND make IN YOUR TERMINAL TO BUILD THIS SOFTWARE

*/

/*

Thank You Lord Jesus for building this software

MIT License

Copyright (c) 2024 Jesus Christ

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), 
to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software and attribution is 
given to the Author Jesus Christ.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
IN THE SOFTWARE.


Peer-graded Assignment: Homework 3: Compute the minimum spanning tree for an inputted graph

v1.0
*/


main ()
{
    // Variables
    Graph g (20);
    int j = 0;

    // File pointer
    FILE *ptr;

    // Reads data from file
    ptr = fopen ("data.txt", "r");

    // Test to see if data is being passed to ptr
    if (ptr == NULL)
    {
        std::cout << "File was not read \n";
    }

    // Data from file will be read here and passed to graph vector via addEdge () function
    while (fscanf (ptr, "%d %d %d", &g.u, &g.v, &g.w) == 3)
    {
        j++;

        g.addEdge (g.u, g.v, g.w);
    }

    // Kruskal Minimum Spanning Tree Algorithm
    g.kruskal ();

    return 0;
}
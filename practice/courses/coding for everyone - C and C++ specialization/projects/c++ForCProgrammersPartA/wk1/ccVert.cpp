/**
 * Thank You Lord Jesus for building this software
 * 
 * Homework 1: Convert a C program  to C++
 *
 * The program should take C arrays in the "My Submission" tab and convert them to vectors. 
 * The conversion should take stdio.h definitions and functions and replace them with 
 * iostream I/O. Use C++ style comments and replace macros and #define constants with inline 
 * functions and const declarations if appropriate.
 *
 * Follow the style guidelines in the text, proper indention, one-line per statement, good 
 * choice of identifiers will figure prominently in grading.
 *
 * Peer grading standards will be based on documentation, good style, correctness, and 
 * elegance.
 * 
 * change to C++ io
 *
 * change to one line comments
 *
 * change defines of constants to const
 *
 * change array to vector<>
 *
 * inline any short function
*/

#include <iostream>
#include <vector>

const int N = 40;

// This function will take data stored in a vector and add it to *p and return the the sum
inline void sum (int *p, int n, std::vector<int> d)
{
    int i;
    *p = 0;

    for (i = 0; i < N; ++i)
    {
        *p = *p + d[i]; // Data will be added here and total will be stored in *p
    }
}


main ()
{
    // Variables
    int i;
    int accum{0};
    std::vector<int> data;

    // The vector data will be initialized here
    for (i = 0; i < N; ++i)
    {
        data.push_back(i);
    }

    sum (&accum, N, data);

    std::cout << "Sum is " << accum << std::endl;

    return 0;
}
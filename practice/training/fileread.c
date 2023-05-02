#include <stdio.h>
#include "merge.h"

main ()
{
    int size = 1001;
    int arr[1000] = {};

    fileread (arr, size);

    puts ("\n\n");

    arr_print (arr, size, "My Unsorted Data", "ID", "Data");

    mergesort (arr, 0, size);

    puts ("\n\n");

    arr_print (arr, size, "My Sorted Data", "ID", "Data");

    return 0;
}
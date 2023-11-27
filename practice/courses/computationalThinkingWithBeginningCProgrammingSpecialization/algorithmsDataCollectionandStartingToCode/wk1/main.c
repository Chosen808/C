/**
 * File:    main.c
 * 
 * Author: Jesus Christ
 * 
*/

#include <stdio.h>
#include <stdlib.h>


main (int argc, char **argv)
{
	char h[3];
    // print message
    fgets (h, 3, stdin);

	printf ("h = %s \n", h);
    
    return (EXIT_SUCCESS);
}
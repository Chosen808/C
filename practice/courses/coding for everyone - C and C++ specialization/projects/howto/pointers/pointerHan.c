/*
2. Write a program in C to demonstrate how to handle pointers in a program.
Expected Output :

Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 
 */

#include <stdio.h>


main ()
{
    int *m = 29;
    int *ab = &m;

    printf ("&m = %p \n", &m);  // address of m
    printf ("m = %d \n", m);   // value of m

    printf ("ab->m = %p \n", ab);   // address of pointer ab
    printf ("*ab = %d \n", *ab);    // content of pointer ab

    m = 34;

    printf ("ab->m %p \n", ab); // address of pointer ab
    printf ("*ab = %d \n", *ab);    // content of pointer ab

    m = 7;

    printf ("&m %p \n", &m);  // address of m
    printf ("m = %d \n", m);  // value of m


    int n = 29;
    int *cd = &n;

    printf ("&n = %p \n", &n);  // address of n
    printf ("n = %d \n", n);    // value of n

    printf ("cd->n = %p \n", cd);   // address of cd
    printf ("*cd = %d \n", *cd);    // content of cd

    n = 34;

    printf ("cd->n = %p \n", cd);   // address of cd
    printf ("*cd = %d \n", *cd);    // content of cd

    *cd = 7;

    printf ("&n = %p \n", &n);  // address of n
    printf ("n = %d \n", n);    // value of n

    return 0;

}
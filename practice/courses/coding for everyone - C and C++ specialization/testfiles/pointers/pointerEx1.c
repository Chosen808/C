/*
1. Write a program in C to show the basic declaration of a pointer.
Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50 
 */

#include <stdio.h>
#include <stdlib.h>


main ()
{
    int m = 10, n, o;
    int *z;

    z = &m;

    printf ("Z addr of m = %p \n", z);    // z stores the address of m
    printf ("Z  val of m = %d m \n", *z);  // *z stores the value of m
    printf ("M addr = %p \n", &m);    // &m is the address of m 
    printf ("N addr = %p \n", &n);    // &n stores sthe address of n
    printf ("O addr = %p \n", &o);    // &o stores the address of o
    printf ("Z addr = %p \n", &z);    // &z stores the address of z

    printf ("M addr = %p \n", (void *) &m);

    return 0;
}
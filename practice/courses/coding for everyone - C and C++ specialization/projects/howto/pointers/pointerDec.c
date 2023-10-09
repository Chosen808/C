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


main ()
{
    int m = 10, n, o;
    int *z = &m;

    printf ("z->m = %p \n", z); // z stores the address of m
    printf ("*z->m = %d \n", *z);   // z is dereferenced to store the value of m
    printf ("&m = %p \n", &m);  // &m is the address of m
    printf ("&n = %p \n", &n);  // &n stores the address of n
    printf ("&o = %p \n", &o);  // &o stores the address of o
    printf ("&z = %p \n", &z);  // &z stores the address of z

}
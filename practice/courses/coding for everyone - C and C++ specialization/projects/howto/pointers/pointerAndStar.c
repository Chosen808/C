/*
3. Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z 
 */

#include <stdio.h>


main ()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    int *x = &m;
    float *y = &fx;
    char *z = &cht;

    printf ("&m = %p \n", &m);  // address of m
    printf ("&fx = %p \n", &fx);    // address of fx
    printf ("&cht = %p \n", &cht);  // address of cht

    printf ("*(&m) = %d \n", *(&m));  // value at m
    printf ("*(&fx) = %f \n", *(&fx));    // value at fx
    printf ("*(&cht) = %c \n", *(&cht));    // value at cht

    printf ("x->m = %p \n", x); // address of m
    printf ("y->fx = %p \n", y);    // address of fx
    printf ("z-> cht = %p \n", z);  // address of cht

    printf ("*x = %d \n", *x);  // value at m
    printf ("*fx = %f \n", y);  // value at fx
    printf ("*z = %c \n", *z);  // value at cht



    return 0;
}
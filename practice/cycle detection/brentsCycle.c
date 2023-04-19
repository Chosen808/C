#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

struct node 
{
    int data;
    struct node *next;
};

struct node detectCycle (struct node *head)
{
    if ( head == NULL)
    {
        return NULL;
    }
}
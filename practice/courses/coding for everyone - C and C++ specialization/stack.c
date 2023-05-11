#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100
#define EMPTY -1
#define FULL MAX_LEN -1

typedef struct stack
{
    int arr[MAX_LEN];
    int top;
} stack;

void reset (stack *stk)
{
    stk -> top = EMPTY;
}

void push (int c, stack *stk)
{
    stk -> top++;
    stk -> arr[stk -> top] = c;
}

int pop (stack *stk)
{
    return (stk -> arr[stk -> top--]);
}

int top (const stack *stk)
{
    return (stk -> arr[stk -> top]);
}

int is_empty (const stack *stk)
{
    return (stk -> top == EMPTY);
}

int is_full (const stack *stk)
{
    return (stk -> top == FULL);
}

main ()
{
    int *num[10] = {10, 34, 120, 54, 54, 55, 76, 223, 32, 23};
    int num_back[10];
    stack stackOfInt;

    int i = 0;

    reset (&stackOfInt);

    for (i = 0; i < 10; i++)
    {
        printf ("Original is: %d \n", num[i]);
    }

    while (num[i] != '\0')
    {
        printf ("%d \n", num[i]);
        push (num[i++], &stackOfInt);
    }

    i = 0;

    while ( !is_empty (&stackOfInt) && i < 10)
    {
        num_back[i++] = pop (&stackOfInt);
    }

    for (i = 0; i < 10; i++)
    {
        printf ("reverse is : %d \n", num_back[i]);
    }

    puts ("");

    printf ("%d \n", EMPTY);
    
    return 0;
}
#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 1000
#define EMPTY -1
#define FULL (MAX_LEN -1)

typedef struct stack
{
    char s[MAX_LEN];
    int top;
} stack;

/*
This ensure that the stack is empty
*/
void reset (stack *stk)
{
    stk -> top = EMPTY; // empties the stack
}

/*
Adds an item to the stack. If the stack is full, then it is 
said to be an Oerflow condition
*/
void push (char c, stack *stk)
{
    stk -> top++;   // increment top
    stk -> s[stk -> top] = c;   // stack[top] assign value
}

/*
Removes an item from the stack. The items are popped in the reversed
order in which they are pushed. If the stack is empty, then it said
to be an Underflow condition
*/
char pop (stack *stk)
{
    return (stk -> s[stk -> top--]);    // store value of stack[top]. 
                                        // decrement top
}

/*
Returns the top element of the stack
*/
char top (const stack *stk)
{
    return (stk -> s[stk -> top]);  //  return stack[top]
}

/*
Return true if the stack is empty, else false
*/
int is_empty (const stack *stk)
{
    return (stk -> top == EMPTY);   //  
}

int is_full (const stack *stk)
{
    return (stk -> top == FULL);
}

int main ()
{
    stack stack_of_char;
    char str[10] = "Hello Dwa";
    char *str_back;

    int i = 0;

    reset (&stack_of_char);

    printf ("is empty: %d \n", is_empty (&stack_of_char));

    printf ("Original is: %s \n", str);

    while (str[i] != '\0')
    {
        printf ("%c \n", str[i]);
        push (str[i++], &stack_of_char);
    }

    i = 0;

    printf ("is empty: %d \n", is_empty (&stack_of_char));

    while (!is_empty (&stack_of_char) && i < 10)
    {
        str_back[i++] = pop(&stack_of_char);
    }

    printf ("reverse is : %s \n", str_back);

    printf ("%c \n", top (str_back));

    
    puts ("");

    printf ("%d \n", EMPTY);

    return 0;
}
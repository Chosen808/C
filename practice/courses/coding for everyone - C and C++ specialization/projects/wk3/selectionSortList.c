/*
Thank you Lord Jesus for building this program.

Option 1 (General)

Use the linear linked list code to store a randomly generated set of 100 integers.  
Now write a routine that will rearrange the list in sorted order of these values. 
Note you might want to use bubble sort to do this. Print these values in rows of 5 
on the screen.

How will this work? Compare two adjacent list elements and if they are out of order 
swap them. After a first pass the largest element will have bubbled to the end of the 
list. Each pass can look at one less element as the end of a list stays sorted.

Ver 1.00
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
This function generates random numbers
*/
int randNum (int arr[], int mul, int size)
{
    for (int i = 0, k = 1; i < size, k < size + 1; i++, k++)
    {
        int temp = mul;

        /*
        If the number entered for mul is smaller than size this statement executes.
        This was created to prevent negative integers from being generated.
        */
        if (mul < size)
        {
            temp = size + mul;
        }

        /*
        rand() is used here to generate random integers which are then puts through
        the formula.
        */
        int val = rand() / temp * size / 15; 
        val = rand() / val;


        arr[i] = val; // random numbers are placed in the array

        printf ("Numbers %d = %d \n", k, arr[i]);   // the numbers added to the array are printed to the screen here
    }
}

// This struct contains the data variables to process the linked list
typedef struct list
{
    int data;

    struct list_t *next;
} list_t;

// This function can check if the list is empty
int is_empty (const list_t *l)
{
    return (l == NULL);
}

// This function creates the linked list
list_t *createList (int d)
{
    list_t *head = malloc (sizeof (list_t)); // memory is allocated here for the pointer to store the data

    head->data = d;
    head->next = NULL;

    return head;
}

// This function adds an integer to the front of the list
list_t *addToFront (int d, list_t *h)
{
    list_t *head = createList (d);
    head->next = h;

    return head;
}

// This function will take the data in the array and process it to create the linked list
list_t *arrayToList (int d[], int size)
{
    list_t *head = createList (d[0]); // this will pass the first number to begin the list

    for (int i = 1; i < size; i++)
    {
        head = addToFront (d[i], head); // this will add the other numbers to the front of the list
    }

    return head;
}

// This function will print the linked list
void printList (list_t *h, char *title)
{
    printf ("%s \n", title);

    do 
    {
        printf ("%d ", h->data);

        h = h->next;
    } while (h != NULL);
}

/*
This is the selection sort algorithmn. It will be used to sort the numbers in
ascending order.
*/
int selectionSort (int arr[], int size)
{
    int temp = 0;  

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // number sorting will be done in this part of the algorithmn
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// This function will print the sorted number in rows of five to the screeen
int printFiveRow (int arr[], int size, char *title)
{
    printf ("%s \n\n", title);

    for (int i = 0, k = 1; i < size, k < size + 1; i++, k++)
    {
        printf ("Value %2d = %5d  ", k, arr[i]);    // sorted values will be printed here

        if (k % 5 == 0) // when k counts to 5 a new line will be generated using this statement
        {
            puts ("\n\n");
            puts ("____");
        }
    }
}


main ()
{
    /*
    These variables will hold the multiplier for generating the random number and the
    amount of numbers to be generated.
    */
    int multiplier = 0, size = 10000;
    int array[size];    // this is the array that will store the randomly generated numbers

    /*
    This array will store the number that will be passed from the linked list to 
    be sorted.
    */
    int array2[size];

    list_t list_of_int;
    list_t *head = NULL;

    printf ("Please enter a multiplier: ");
    scanf ("%d", &multiplier);

    printf ("Please enter how many numbers to generate: ");
    scanf ("%d", &size);

    randNum (array, multiplier, size);

    head = arrayToList (array, size);

    puts ("\n");

    printList (head, "Array made into a 100 element list");

    puts ("\n\n");

    /*
    Numbers that were printed by the linked list will now be passed back to an array 
    to be processed for sorting here.
    */
    for (int i = 0; i < size; i++)
    {
        array2[i] = head->data;

        head = head->next;
    }

    puts ("\n\n");

    selectionSort (array2, size);

    printFiveRow (array2, size, "Order Values");

    return 0;
}
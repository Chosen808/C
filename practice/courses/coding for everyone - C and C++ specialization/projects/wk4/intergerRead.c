/*
Thank you Lord Jesus for building this program

Open and read a file of integer pairs into an array that is created with the first integer 
telling you how many to read.  

So  4 9  11  4  5    would mean create an integer array size 4 and read into data[].  

Write a routine that places these values into a binary tree structure. Then walk the tree 
“inorder” and print these values to the screen.

Submit your work in a text file. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM 100

typedef int DATA_t;

/*
This struct will hold the variables that will process the data for the binary tree
*/
typedef struct node
{
    DATA_t d;

    struct node *left;
    struct node *right;
};

typedef struct node NODE_t;

typedef NODE_t *BTREE;

/*
This function will walk the tree "inorder" and print these values to the screen
*/
void inorder (BTREE root)
{
    if (root != NULL)
    {
        inorder (root->left);

        printf ("%d ", root->d);

        inorder (root->right);
    }
}

/*
This function will create memory required for each node
*/
BTREE newNode (void)
{
    return (malloc (sizeof (NODE_t)));
}

/*
This function will initialize a new node
*/
BTREE initNode (DATA_t d1, BTREE p1, BTREE p2)
{
    BTREE t;

    t = newNode ();
    t->d = d1;
    t->left = p1;
    t->right = p2;

    return t;
}

/*
This function will create the binary tree
*/
BTREE createTree (DATA_t a[], int i, int size)
{
    if (i >= size)
    {
        return NULL;
    }

    else 
    {
        return (initNode (a[i], createTree (a, 2 * i + 1, size), createTree (a, 2 * i + 2, size)));
    }
}

/*
This function will read the input file which is put in at the terminal
and pass the data to int data[]. int data[] will then pass the selected
numbers to int d2[]. The first number in the file will be passed to
double *s which the number of number to be processed.
*/
void arrayRead (FILE *in, int data[], int d2[], int *size, int *s)
{
    *size = 0;  // this will store the number of digits in the file
    *s = 0; // this will store the number of digits to be processed

    /*
    This function passes the data which comes from the file which is
    passed to the pointer FILE *in and stores it in an array int data[].
    It also counts the amount of numbers and stores in int *size
    */
    while (fscanf (in, "%d", &data[*size]) == 1)
    {
        (*size)++;  // this stores how many numbers are in the file and passes it to int *size

        *s = data[0];   // this will pass the first number in array to tell how many to read
    }

    /*
    This statement will pass the number to be read from int data[] to int data2
    */
    for (int i = 0, k = 1; i < *s, k < *s + 1; i++, k++)
    {
        d2[i] = data[k];
    }

    fclose (in);    // this will close the file
}


/*
This function will print the data that is stored in the array int data[]
*/
void printData (int data2[], int size)
{
    for (int i = 0; i < size; i++)  // this for loop print the data stored in int data[]
    {
        printf ("%d \t", data2[i]); // this prints the numbers stored in int data[]

        if (i == size - 1)  // this statement will print a new line when i is finished counting
        {
            puts ("\n");
        }
    }
}


main (int argc, char *argv[])
{
    // This pointer will accept the data that is passed from the file
    FILE *in;
    
    int data[MAX_NUM];  // This array will accept data from the file that is entered at the terminal
    int data2[MAX_NUM]; // This array will accept the numbers to be used that will be passed from data[]
    int size = MAX_NUM; // This will hold the amount of numbers that will be passed from the file enter at the terminal
    int s = MAX_NUM;    // This will hold the amount of numbers to be used

    BTREE b;

    // Here a check is made to see if there is a file entered at the terminal
    if (argc != 2)
    {
        printf ("Need executable input/output file \n");

        exit (1);
    }

    // This will open the file entered at the terminal
    in = fopen (argv[1], "r+");

    arrayRead (in, data, data2, &size, &s);

    printData (data2, s);

    b = createTree (data2, 0, s);

    printf ("INORDER \n");

    inorder (b);

    puts ("\n\n");

    return 0;
}
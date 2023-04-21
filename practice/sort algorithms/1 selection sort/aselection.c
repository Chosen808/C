/*This software contains the selection sort algorthim which has been addapted to suite the
needs of this applicaion. It also contains an average checking algorithm. 

It has been developed to take a files with data input and manual input of data.

Ver 1.01
*/

#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

/*NB: 1. Make adjustments in the description of the first block of code to reflect the new 
      new block you will be building in. eg This block receives Names and Scores manually.
      eg. This block receives names and numbers by a list provided
      2. Ability to cancel a selection
    
        */

main ()
{
    /// Variables
    int size, size2, temp, sort, j, option;
    double avg, atemp;

    /// Arrays for names & sorting names
    char names[100000][40];
    char ntemp[100000][40];

    /// Array for numbers
    int arr[10000];

    /// Constant variables to handle timing and count
    const int timer = 0;
    int tempp = 0;

    /*Pointers to change the value of constant
    variables for timing and count*/
    int *q = &timer;
    int *p = &tempp;
    int *op = &tempp;
    int *oq = &timer;

    /*This block of code:
        1. Collects how many scores are being entered
        2. Adds the size to the constant tempp through the pointer *p to be saved
        3. Collects names and scores
        4. Adds the size to the constant timer after it first starts at 0
        5. Directs the program to options to select */

    
    ///////////////////////////////////////////////////////////////

    start: puts ("Please choose your entry method:\n1 For manual entry\n2 For list\n");
    scanf ("%d", &option);

    //3.
    if ( option == 1)
    {
        //1.
        printf ("How many scores are you entering?: \n");
        puts ("Enter 0 to cancel and go back to select: ");
        scanf ("%d", &size);

        //2.
        //tempp+=size;

        if (size == 0)
        {
            goto select;
        }

        else 
        {
            tempp+=size;

            for (int i = timer; i < tempp; i++)
            {
                printf ("Name ID%d: ", i);
                scanf ("%s", &names[i]);

                printf ("Enter Score ID%d: \n", i);
                scanf ("%d", &arr[i]);

                if (i == tempp -1)
                {
                    //4.
                    *q+=size;
             
                    //5.
                    goto select;
                }
            }
        }
    }

    /*
    File Reading:
        1. filename[] will collect the name of the file input. str[] will
        check to see if the file is empty. value will receive the result
        of the comparison between filename[] and str[]
        2. The user is prompted for file name input
        3. filename[] and str[] is compared */
    if ( option == 2)
    {
        //1.
        char filename[20];
        char str[10] = "0";
        int value;

        //2.
        puts ("Please enter your file name: ");
        puts ("Enter 0 to cancel and go back to select: ");
        scanf ("%s", filename);

        value = strcmp (filename, str);

        printf ("value = %d\n", value);

        if ( value == 0 )
        {

            goto select;
        }

        else
        {
            FILE *popenn = fopen ( filename, "r");

            if ( popenn == NULL)
            {
                puts ("No such file exist.");

                return 1;
            }

            int numbers[100];
            char str[10000];
            int temp, j;
            char ntemp;

            j = -1;
            j+=tempp;
            size = 0;

            while ( fscanf ( popenn, "%*s %s", numbers) == 1)
            {
                j++;
                size++;
                printf ("SIZE = %d \n", size);

                temp = atoi (numbers);
                arr[j] = temp;
            }

            for ( int i = 0; i < tempp + 1; i++)
            {
                printf ("Score ID%d: %d \n", i, arr[i]);
            }

            FILE *qopenn = fopen (filename, "r");

            if ( p = NULL)
            {
                puts ("No such file exist.");

                return 1;
            }

            int k;

            k = -1;
            k+=tempp;

            while ( fscanf (qopenn, "%s %*s", str) ==1 )
            {
                printf ("Names: %s \n", str);

                k++;

                strcpy (names[k], str);
            }

            puts ("\n");

            for ( int i = 0; i < j + 1; i++)
            {
                printf ("Names ID%d: %s \n", i, names[i]);
                printf ("Scores ID%d: %d \n", i, arr[i]);

                puts ("\n");
            }
        
            *op+=size;

            *oq+= size;

            goto select;
        }
    }
    //*///

    /*This block of code:
        1. Prints options to select what processing to put numbers through
        2. Numbers and names are sorted in Ascending order
        3. Numbers and names are sorted in Descending order
        4. The program is directed back to first print statement to add more
           names and numbers
        5. Average is calculated here
        6. Here a single value at a time can be changed
        7. The program terminates if option 5 is selected here
        8. Names and numbers are printed out here after being sorted in
           in ascending or descending order and then directed back to
           the first print statement*/

    //1.
    select: printf ("\nSelect:\n1 for Ascending Sort\n2 for Descending \n3 Add more Scores \n4 Find Average of Score\n5 Remove Scores \n6 Exit\n:");
    scanf ("%d", &sort);
    printf ("\n");

    //2. 
    if (sort == 1)
    {
        for (int i = 0; i < tempp; i++)
        {
            for (j = i + 1; j < tempp; j++)
            {
                if ( arr[i] > arr[j])
                {
                    /// Numbers are sorted here
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;

                    /// Names are sorted here
                    strcpy (ntemp[0], names[i]);
                    strcpy (names[i], names[j]);
                    strcpy (names[j], ntemp[0]);

                }
            }
        }
    }

    //3.
    if (sort == 2)
    {
        for (int i = 0; i < tempp; i++)
        {
            for (j = i + 1; j < tempp; j++)
            {
                if (arr[i] < arr[j])
                {
                    /// Numbers are sorted here
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;

                    /// Nmaes are sorted here
                    strcpy (ntemp[0], names[i]);
                    strcpy (names[i], names[j]);
                    strcpy (names[j], ntemp[0]);
                }
            }
        }
    }

    //4.
    if (sort == 3)
    {
        goto start;
    }

    //5.   
    if (sort == 4)
    {
        for (int i = 0; i < tempp; i++)
        {
            atemp = atemp + arr[i];

            avg = atemp / tempp;

            if (i == tempp -1)
            {
                printf ("Your average score is %.3f \n", avg);

                goto select;
            }
        }
    }

    //6.
    if (sort == 5)
    {
        /// Variables
        int clear =0;

        /// Arrays for erasing data from arrays
        char erase[1][1] = {" "};
        int rnums[1];

        rnums[0] = 0;

        puts ("Please setect ID to clear: \n");
        scanf ("%d", &clear);

        /// Here the name and number is erased
        strcpy (names[clear], erase[0]);
        arr[clear] = rnums[0];

        printf ("names[%d] = %s \n", clear, names[clear]);
        printf ("arr[%d] = %d \n", clear, arr[clear]);

        puts ("Please enter your new values: \n");

        /// Arrays for accepting new name and number
        char nname[20][20];
        int nnums = 0;

        /// Here input for the new name and number are accepted
        for (int i = 0; i < 1; i++)
        {
            printf ("Please enter new names for ID%d: \n", clear);
            scanf ("%s", nname[i]);

            printf ("PLease enter new number for ID%d: \n", clear);
            scanf ("%d", &nnums);
        }

        /// Here the new name and number are copied to the arrays
        strcpy (names[clear], nname[0]);
        arr[clear] = nnums;

        puts ("\n");

        /// All values are printed here including new entered values
        for (int i = 0; i < tempp; i++)
        {
            printf ("Name: %s \nScore ID%d: %d \n\n", names[i], i, arr[i]);

            if (i == tempp -1)
            {
                goto select;
            }
        }
    }

    //7.
    if (sort == 6)
    {
        return 0;
    }

    //8.
    for (int i = 0; i < tempp; i++)
    {
        printf ("Name: %s \nScore ID%d: %d \n\n", names[i], i, arr[i]);

        if (i == tempp -1)
        {
            goto select;
        }
    }

    printf ("Hello world, this is a test \n");

}
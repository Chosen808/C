#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

///THIS IS A SLECTION SORT PROGRAM THAT CALCULATES AVERAGES AND COLLECTS NAMES TO PAIR WITH 
///THIS SCORES

main ()
{

    // THIS BLOCK OF CODE CALCULATES THE AVERAGE OF THE SCORE WHICH ARE PASSED TO THE ARRAY
    int size;
    double avg, temp;

    printf ("Please enter how many sores you have: ");
    scanf ("%d", &size);

    temp = 0;

    int arr[size];  // This is the integer array

    char name[size][20];    // This is the array for the names 
    char temp3[size][20];   //This is the array to store the names temporarily while going through the sort selection loop

    for (int i = 0; i < size; i++)  // This loop runs until the value of size is reached and the corresponding number of socres and names have been collected
    {
        printf ("Please enter the name: "); // Names are collected here
        scanf ("%s", name[i]);  // Names are collected here

        printf ("Please enter score %d: ", i);  // Scores are collected here
        scanf ("%d", &arr[i]);  // Scores are collected here

       // printf ("arr: %d \n", arr[i]);

        temp = temp + arr[i];   // Here the score values are sumed up

        //printf ("temp: %d \n", temp);

        if (i == size -1)   // This is where average is calculated based on i running out its loop
        {
            printf ("\nYour scores you entered are: \n");

            for (i = 0; i < size; i++)  // The scores entered are printed out here from this loop
            {
                printf ("Score[%d] = %d \n", i, arr[i]);    // The scores entered are printed out here
            }

            if (i == size)  // This is where average is calculated based on i running out its loop
            {
                avg = temp / size;  // This is where average is calculated based on i running out its loop

                printf ("\nYour sverage score is %f \n", avg);  //This is where average is printed out
            }
        }
    }

    // THIS BLOCK OF CODE SORTS THE ORDER OF THE SCORES IN ASCENDING OR DESCENDING ORDER
    int j, temp2, sort; 

    printf ("\nEnter 1 for Ascending Sort \nEnter 2 for Descending Sort \n");   // The osrting options are printed here

    printf ("Enter your choice \n");    // Sorting option 1 or 2 is collected here
    scanf ("%d", &sort);    // Sorting option 1 or 2 is collected here

    if (sort == 1)  // Here is sorting option 1 which will sort in ascending order
    {
        for (int i = 0; i < size; i++)  
        {
            printf ("1st for i: %d \n", i);

            for (j = i + 1; j < size; j++)
            {
                printf ("2nd for i: %d \n", i);
                printf ("2nd for j: %d \n", j);

                if (arr[i] > arr[j])    // Scores are sorted here 
                {  
                    printf ("2nd if i: %d \n", i);
                    printf ("2nd if j: %d \n", j);

                    printf ("before arr[i]: %d \n", arr[i]);
                    printf ("before arr[j]: %d \n", arr[j]);

                    temp2 = arr[i]; // Score are sorting here copying and replacing values
                    arr[i] = arr[j];
                    arr[j] = temp2;

                    printf ("after arr[i]: %d \n", arr[i]);
                    printf ("after arr[j]: %d \n", arr[j]);
                    printf ("\n\n");

                    strcpy (temp3[0], name[i]); // Here the names are sorted based on the sorting of the numbers if (arr[i] > arr[j])
                    strcpy (name[i], name[j]);
                    strcpy (name[j], temp3[0]);
                }    
            }
        }
    }

    if (sort == 2)  // Here is sorting option 1 which will sort in descending order order
    {
        for (int i = 0; i < size; i++)
        {
            for (j = i + 1; j < size; j++)
            {
                if (arr[i] < arr[j])    // Scores are sorted here 
                {
                    temp2 = arr[i]; // Score are sorting here copying and replacing values
                    arr[i] = arr[j];
                    arr[j] = temp2;

                    strcpy (temp3[0], name[i]); // Here the names are sorted based on the sorting of the numbers if (arr[i] < arr[j])
                    strcpy (name[i], name[j]);
                    strcpy (name[j], temp3[0]);
                }
            }
        }
    }
    

    printf ("\nYour scores after sorting are: \n");

    for (int i = 0; i < size; i++)  // This loop prints out the sorted names and scores
    {
        printf ("Name: %s, Score: %d \n", name[i], arr[i]); // Sorted names and scores are printed here
    }

    return 0;
}
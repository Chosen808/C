#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

#define MAX 100

int main()

{

    int data[MAX];
    int i, j, temp, size, sort;

   // clrscr();

    printf("Enter the size of the Array: ");

    scanf("%d", &size);

    printf("Size of the Array : %d \n", size);

    printf("Enter elements of Array: \n");

    for(i=0; i<size; i++)
    {
        printf("Enter Array ID %d: \n", i);
        scanf("%d", &data[i]);
    }

    printf("\nArray is as follows: \n");

    for(i=0; i<size; i++)

        printf("%d \n", data[i]);

/////SORTING BLOCK//////////////////////////////

    printf("\n1. Sort in Ascending \n2. sort in Descending \n");

    printf("Enter your choice: \n");

    scanf("%d", &sort);

    if(sort==1)
    {
        for(i=0; i<size; i++)
        {

            for(j=i+1; j<size; j++)
            {

                if(data[i]>data[j])

                {
                    temp=data[i];
                    data[i]=data[j];
                    data[j]=temp;
                }

            }

        }

    }

    if(sort==2)
    {

        for(i=0; i<size; i++)
        {
            for(j=i+1; j<size; j++)
            {

                if(data[i]<data[j])
                {
                    temp=data[i];
                    data[i]=data[j];
                    data[j]=temp;
                }

            }

        }
    }

    printf("\n");

    printf("After Sorting Array is as follows: \n");

    for(i=0; i<size; i++)

        printf("%d \n",data[i]);

     return 0;

}
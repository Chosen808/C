#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>

main()
{
    int size = 100;
    int num[size];
    char names[size][size];

    int name = 0, nums = 0;

    int *p = &num;
    char *q = &names;

    puts ("You will now be prompted to enter your data: \n");

    for (int i = 0; i < 3; i++)
    {
        printf ("Enter name ID%d: ", i);
        scanf ("%s", &names[i]);

        printf ("Enter score ID%d: ", i);
        scanf ("%d", &num[i]);
    }

    puts ("Your names & scores entered are: \n");

    for (int i = 0; i < 3; i++)
    {
        printf ("Name ID%d: %s \n", i, names[i]);
        printf ("Score ID%d: %d \n", i, num[i]);
    }

    puts("\nPlease enter name ID to remove: \n");
    scanf ("%d", &name);

    char none = " ";

    p[name] = none;

    //
    /*
    for (int i = 0; i < 1; i++)
    {
        scanf ("%s", &names[num])
    }
    /
    *///

    printf ("Name ID%d: %s \n", name, names[name]);

    return 0;


}
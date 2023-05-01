#include <stdio.h>
#include <stdlib.h>

enum day
{
    sun, mon, tue, wed, thu, fri, sat
};

void print_day (enum day d)
{
    switch (d)
    {
        case sun:
            printf ("sunday");
                break;
        
        case mon:
            printf ("monday");
                break;
        
        case tue:
            printf ("tuesday");
                break;
        
        case wed:
            printf ("wednesday");
                break;

        case thu:
            printf ("thurday");
                break;

        case fri:
            printf ("friday");
                break;

        case sat:
            printf ("saturday");
                break;

        default: 
            printf ("%d is an error", d);
    }
}

enum day next_day (enum day d)
{
    return (d + 1 % 7);
}

main ()
{
    
    enum day today = fri;
    int tomorrow = 1;

    print_day (today);
    printf ("\n\n");
    print_day (8);
    printf ("\n\n");
    print_day (next_day (today));
    printf ("\n\n");

    return 0;
}
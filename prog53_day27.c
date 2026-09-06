#include <stdio.h>

int main()
{
    int i, j;

    // Increasing pattern
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing pattern
    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*vardhjain0408@Vardhs-MacBook-Air ~ % gcc prog53_day27.c -o prog53_day27
vardhjain0408@Vardhs-MacBook-Air ~ % ./prog53_day27
*
***
*****
*******
*********
*******
*****
***
*
vardhjain0408@Vardhs-MacBook-Air ~ % 
*/
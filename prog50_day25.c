#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        // Print spaces
        for(j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
/*vardhjain0408@Vardhs-MacBook-Air ~ % gcc prog50_day25.c -o prog50_day25 
vardhjain0408@Vardhs-MacBook-Air ~ % ./prog50_day25 
*****
 ****
  ***
   **
    *
vardhjain0408@Vardhs-MacBook-Air ~ % 
*/
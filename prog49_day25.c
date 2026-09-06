#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*vardhjain0408@Vardhs-MacBook-Air ~ % gcc prog49_day25.c -o prog49_day25
vardhjain0408@Vardhs-MacBook-Air ~ % ./prog49_day25
5
45
345
2345
12345
vardhjain0408@Vardhs-MacBook-Air ~ % 
*/
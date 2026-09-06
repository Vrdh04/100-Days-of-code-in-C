#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

/*vardhjain0408@Vardhs-MacBook-Air ~ % gcc prog55_day28.c -o prog55_day28
vardhjain0408@Vardhs-MacBook-Air ~ % ./prog55_day28
Enter n: 33
Prime numbers from 1 to 33 are:
2 3 5 7 11 13 17 19 23 29 31 %                                                                                                                                                                       
vardhjain0408@Vardhs-MacBook-Air ~ % 
*/
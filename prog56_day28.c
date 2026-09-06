#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/*vardhjain0408@Vardhs-MacBook-Air ~ % gcc prog56_day28.c -o prog56_day28
vardhjain0408@Vardhs-MacBook-Air ~ % ./prog56_day28
Enter number of elements: 5
Enter 5 elements: 5
10 20 30 40 
Array elements are: 5 10 20 30 40 %                                                                                                                                                                  
vardhjain0408@Vardhs-MacBook-Air ~ % 
*/
#include <stdio.h>
int main()
{
    int n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

/*ardhjain0408@Mac ~ % gcc prog58_day29.c -o prog58_day29
vardhjain0408@Mac ~ % ./prog58_day29
Enter number of elements: 3
Enter 3 elements:
34
45
67
Maximum element = 67
Minimum element = 34
vardhjain0408@Mac ~ %   
*/
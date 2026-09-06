#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog57_day29.c -o prog57_day29
vardhjain0408@Mac ~ % ./prog57_day29
Enter number of elements: 3
Enter 3 elements:
22
33
3434
Sum of array elements = 3489
vardhjain0408@Mac ~ % 
*/
#include <stdio.h>

int main()
{
    int n, i;
    int largest, second;
    int a[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    if(largest == second)
    {
        printf("Second largest element does not exist");
    }
    else
    {
        printf("Second largest element = %d", second);
    }

    return 0;
}
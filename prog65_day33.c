#include <stdio.h>

int main()
{
    int n, i, element;
    int low, high, mid;
    int found = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements in sorted order:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == element)
        {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(element < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}
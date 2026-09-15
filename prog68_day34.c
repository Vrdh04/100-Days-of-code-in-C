#include <stdio.h>

int main()
{
    int n, i, position;
    int a[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position of element to delete: ");
    scanf("%d", &position);

    if(position < 1 || position > n)
    {
        printf("Invalid position");
        return 0;
    }

    for(i = position - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
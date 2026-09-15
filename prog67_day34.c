#include <stdio.h>

int main()
{
    int n, i, element, position;
    int a[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    if(position < 1 || position > n + 1)
    {
        printf("Invalid position");
        return 0;
    }

    for(i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = element;
    n++;

    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n, i, element, position;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d elements in sorted order:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    position = n;

    for(i = 0; i < n; i++)
    {
        if(element < a[i])
        {
            position = i;
            break;
        }
    }

    for(i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position] = element;
    n++;

    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
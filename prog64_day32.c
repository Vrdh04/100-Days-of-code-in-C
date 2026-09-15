#include <stdio.h>

int main()
{
    long long n;
    int digit, i;
    int count[10] = {0};
    int max = 0, most;

    printf("Enter an integer number: ");
    scanf("%lld", &n);

    if(n < 0)
        n = -n;

    if(n == 0)
    {
        printf("Most frequent digit = 0");
        return 0;
    }

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            most = i;
        }
    }

    printf("Most frequent digit = %d\n", most);
    printf("It occurs %d times.", max);

    return 0;
}
/*Q43: Write a program to check if a number is a strong number.


Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main()
{
    int n, temp, rem, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;

        fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is a Strong Number.", n);
    else
        printf("%d is not a Strong Number.", n);

    return 0;
}


/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day22.c -o prog1_day22.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day22.out
Enter a number: 145
145 is a Strong Number.
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day22.out
Enter a number: 123
123 is not a Strong Number.
*/


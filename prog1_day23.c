/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>
int main()

{

    int n, i, num = 1, den = 2;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            sum = sum + 1;
        else
        {
            num = num + 2;
            den = den + 2;
            sum = sum + (float)num / den;
        }
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day23.c -o prog1_day23.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day23.out
Enter number of terms: 3
Sum of the series = 2.58
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day23.out
Enter number of terms: 5
Sum of the series = 4.36
*/
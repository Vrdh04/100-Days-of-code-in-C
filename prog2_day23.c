/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****


Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day23.c -o prog2_day23.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day23.out
*****
*****
*****
*****
*****
*/



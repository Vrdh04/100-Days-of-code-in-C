#include<stdio.h>
int main(){
int n, o, remainder, sum;

printf("Enter the value of n:  ");
scanf("%d", &n);

o = n;
 while(n != o)
 {
    remainder = n % 10;
    sum = sum + (remainder * remainder * remainder);
           n = n / 10;
    }
 if (sum == o)
    printf(" The number is an armstrong number");

    else 
    printf("The number is not an armstrong number");

    return 0;
}
#include <stdio.h>
int main(){
    char str[100];
    int i, length = 0, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[length] != '\0') {
        length++;
    }
    for(i = 0; i < length / 2; i++){
        if(str[i] != str[length - 1 - i]){
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");
return 0;
}

/*vardhjain0408@Vardhs-MacBook-Air ~ % gcc prog2_day43.c -o prog2_day43
vardhjain0408@Vardhs-MacBook-Air ~ % ./prog2_day43
Enter a string: naman
The string is a palindrome.%                                                                                                                                                                         
vardhjain0408@Vardhs-MacBook-Air ~ % hello
zsh: command not found: hello
vardhjain0408@Vardhs-MacBook-Air ~ % 
*/
#include <stdio.h>
int main(){
    char str[100];
    int i, length = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[length] != '\0'){
        length++;
    }
    printf("Reversed string: ");
    for(i = length - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    return 0;
}

/*vardhjain0408@Vardhs-MacBook-Air ~ % gcc prog1_day43.c -o prog1_day43
vardhjain0408@Vardhs-MacBook-Air ~ % ./prog1_day43
Enter a string: abcd
Reversed string: dcba%                                                                      
vardhjain0408@Vardhs-MacBook-Air ~ % 
*/
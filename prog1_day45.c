#include <stdio.h>
int main(){
    char str[100], ch;
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to find: ");
    scanf("%c", &ch);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            count++;
        }
    }
    printf("Frequency of '%c' = %d", ch, count);
    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog1_day45.c -o prog1_day45
vardhjain0408@Mac ~ % ./prog1_day45
Enter a string: vardh jain 020202@@22
Enter the character to find: @
Frequency of '@' = 2%                                                                                                                                                                                
vardhjain0408@Mac ~ % 
*/
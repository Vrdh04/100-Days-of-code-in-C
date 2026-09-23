#include <stdio.h>
int main(){
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            digits++;
        }
        else if(!((str[i] >= 'A' && str[i] <= 'Z') ||
                  (str[i] >= 'a' && str[i] <= 'z') ||
                  str[i] == '\n')){
            special++;
        }
    }
    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);
    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog1_day44.c -o prog1_day44
vardhjain0408@Mac ~ % ./prog1_day44
Enter a string: vardh
Spaces = 0
Digits = 0
Special characters = 0
vardhjain0408@Mac ~ % ./prog1_day44
Enter a string: Jv0408@ vardh_
Spaces = 1
Digits = 4
Special characters = 2
vardhjain0408@Mac ~ % 
*/
#include <stdio.h>
int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            str[i] = '-';
        }
    }
    printf("String after replacing spaces: %s", str);
    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog2_day44.c -o prog2_day44
vardhjain0408@Mac ~ % ./prog2_day44
Enter a string: vardh jain
String after replacing spaces: vardh-jain
vardhjain0408@Mac ~ % 
*/
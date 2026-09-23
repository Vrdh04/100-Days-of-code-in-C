#include <stdio.h>
int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    printf("String after toggling case: %s", str);
    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog2_day45.c -o prog2_day45
vardhjain0408@Mac ~ % ./prog2_day45
Enter a string: vardh jain02@
String after toggling case: VARDH JAIN02@
vardhjain0408@Mac ~ % 
*/
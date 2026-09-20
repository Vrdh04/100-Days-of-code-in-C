#include <stdio.h>
int main(){
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U'){
            vowels++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z')){
            consonants++;
        }
        i++;
    }
    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);
    return 0;
}
/*vardhjain0408@Mac ~ % gcc prog1_day42.c -o prog1_day42
vardhjain0408@Mac ~ % ./prog1_day42
Enter a string: vardh
Number of vowels = 1
Number of consonants = 4
vardhjain0408@Mac ~ % 
*/
#include <stdio.h>
int main(){
    char str[200];
    int i = 0, length = 0, maxLength = 0;
    int start = 0, maxStart = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        if(str[i] != ' ' && str[i] != '\n'){
            if(length == 0)
                start = i;
            length++;
        }
        else{
            if(length > maxLength){
                maxLength = length;
                maxStart = start;
            }
            length = 0;
        }
        i++;
    }
    if(length > maxLength){
        maxLength = length;
        maxStart = start;
    }
    printf("Longest word: ");
    for(i = maxStart; i < maxStart + maxLength; i++){
        printf("%c", str[i]);
    }
    printf("\nLength: %d", maxLength);
    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog94_day47.c -o prog94_day47
vardhjain0408@Mac ~ % ./prog94_day47
Enter a sentence: my name is vardh jain.
Longest word: vardh
Length: 5%                                                                                                                                                                                           
vardhjain0408@Mac ~ % 
*/
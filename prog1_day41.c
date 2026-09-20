#include <stdio.h>
int main(){
    char str[100];
    int i = 0, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        if(str[i] != '\n'){
            count++;
        }
        i++;
    }
    printf("Number of characters = %d", count);

    return 0;
}
/*vardhjain0408@Mac ~ % gcc prog1_day41.c -o prog1_day41
vardhjain0408@Mac ~ % ./prog1_day41
Enter a string: 22
Number of characters = 2%                                                                                                                                                                            
vardhjain0408@Mac ~ % 
*/
#include <stdio.h>
int main(){
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Characters are:\n");
    while(str[i] != '\0' && str[i] != '\n'){
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}
/*vardhjain0408@Mac ~ % gcc prog2_day41.c -o prog2_day41
vardhjain0408@Mac ~ % ./prog2_day41
Enter a string: 2334444
Characters are:
2
3
3
4
4
4
4
vardhjain0408@Mac ~ % 
*/
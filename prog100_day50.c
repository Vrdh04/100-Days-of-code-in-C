#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i, j, k, n;
    printf("Enter a string: ");
    scanf("%s", str);
    n = strlen(str);
    printf("All substrings are:\n");
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            for(k = i; k <= j; k++){
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
/*vardhjain0408@Vardhs-MacBook-Air ~ % gcc prog100_day50.c -o prog100_day50
vardhjain0408@Vardhs-MacBook-Air ~ % ./prog100_day50
Enter a string: vardh
All substrings are:
v
va
var
vard
vardh
a
ar
ard
ardh
r
rd
rdh
d
dh
h
vardhjain0408@Vardhs-MacBook-Air ~ % 
*/
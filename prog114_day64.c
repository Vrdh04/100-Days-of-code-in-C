#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int i, j, k;
    int maxLength = 0;
    int currentLength;
    printf("Enter a string: ");
    scanf("%99s", s);
    for (i = 0; s[i] != '\0'; i++){
        currentLength = 0;
        for (j = i; s[j] != '\0'; j++){
            int repeated = 0;
            for (k = i; k < j; k++){
                if (s[k] == s[j]){
                    repeated = 1;
                    break;
                }
            }
            if (repeated == 1)
                break;
            currentLength++;
            if (currentLength > maxLength)
                maxLength = currentLength;
        }
    }
    printf("%d\n", maxLength);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], temp[200];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL)
        printf("%s is a rotation of %s", str2, str1);
    else
        printf("%s is not a rotation of %s", str2, str1);
    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog95_day48.c
vardhjain0408@Mac ~ % gcc prog95_day48.c -o prog95_day48 
vardhjain0408@Mac ~ % ./prog95_day48 
Enter first string: vardh
Enter second string: jain
Not a rotation%                                                                                                                                                                                      
vardhjain0408@Mac ~ % 

*/
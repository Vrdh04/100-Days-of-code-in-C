#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int i, lastSpace = -1;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }
    printf("%c. ", name[0]);
    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", name[i + 1]);
        }
    }
    printf("%s", &name[lastSpace + 1]);
    return 0;
}
/*vardhjain0408@Mac ~ % gcc prog98_day49.c -o prog98_day49
vardhjain0408@Mac ~ % ./prog98_day49
Enter full name: vardh jain
v. jain%                                                                                                                                                                                             
vardhjain0408@Mac ~ % 
*/
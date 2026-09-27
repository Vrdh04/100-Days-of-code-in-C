#include <stdio.h>
int main() {
    char name[100];
    int i;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    if (name[0] != ' ')
        printf("%c", name[0]);
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }
    return 0;
}
/*vardhjain0408@Mac ~ % gcc prog97_day49.c -o prog97_day49
vardhjain0408@Mac ~ % ./prog97_day49
Enter your full name: vardh jain 
vj
vardhjain0408@Mac ~ % */

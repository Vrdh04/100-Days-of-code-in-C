#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i, start = 0, end, len;
    char temp;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    printf("After reversing each word: %s", str);
    return 0;
}
/*vardhjain0408@Mac ~ % gcc prog96_day48.c -o prog96_day48 
vardhjain0408@Mac ~ % ./prog96_day48 
Enter a sentence: my name is vardh.
After reversing each word: ym eman si .hdrav
vardhjain0408@Mac ~ % 
*/
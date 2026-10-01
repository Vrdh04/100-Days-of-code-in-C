#include <stdio.h>
int main(){
    int day, month, year;
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);
    if (month == 4){
        printf("Date in new format: %02d-Apr-%04d\n", day, year);
    }
    else{
        printf("Please enter a date with month 04.\n");
    }
    return 0;
}
#include <stdio.h>
int main(){
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of the matrices:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog1_day38.c -o prog1_day38
vardhjain0408@Mac ~ % ./prog1_day38
Enter number of rows and columns: 2
2
Enter elements of first matrix:
12
23
34
56
Enter elements of second matrix:
21
43
65
76
Sum of the matrices:
33 66 
99 132 
vardhjain0408@Mac ~ % 
*/
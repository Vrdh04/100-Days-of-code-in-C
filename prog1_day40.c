#include <stdio.h>
int main(){
    int a[100][100];
    int rows, cols;
    int i, j, d;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols); 
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Diagonal Traversal:\n");
    for(d = 0; d < rows + cols - 1; d++){
        for(i = 0; i < rows; i++){
            j = d - i;
            if(j >= 0 && j < cols){
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog1_day40.c -o prog1_day40
vardhjain0408@Mac ~ % ./prog1_day40
Enter number of rows and columns: 3
3
Enter matrix elements:
12
23
23
34
45
55
45
45
45
Diagonal Traversal:
12 23 34 23 45 45 55 45 45 %                                                                                                                                                                         
vardhjain0408@Mac ~ % ./prog1_day40
*/
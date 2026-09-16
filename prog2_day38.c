#include <stdio.h>
int main(){
    int a[10][10];
    int n, i, j;
    int symmetric = 1;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
        if(symmetric == 0)
            break;
    }
    if(symmetric == 1)
        printf("The matrix is symmetric.");
    else
        printf("The matrix is not symmetric.");

    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog2_day38.c -o prog2_day38
vardhjain0408@Mac ~ % ./prog2_day38
Enter the order of square matrix: 2
Enter matrix elements:
12
32
43
44
The matrix is not symmetric.%                                                                                                                                                                        
vardhjain0408@Mac ~ % 
*/
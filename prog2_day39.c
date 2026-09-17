#include <stdio.h>
int main(){
    int n, i, j, sum = 0;
    int a[10][10];
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        sum = sum + a[i][i];
    }
    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}

/*vardhjain0408@Mac ~ % ./prog2_day39
Enter the size of square matrix: 3
Enter the matrix elements:
12
34
56
76
89
54
44
55
66
Sum of main diagonal elements = 167%                                                                                                                                                                 
vardhjain0408@Mac ~ % 
*/
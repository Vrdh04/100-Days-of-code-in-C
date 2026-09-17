#include <stdio.h>
int main(){
    int n, i, j, flag = 1;
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
        for(j = i + 1; j < n; j++){
            if(a[i][i] == a[j][j]){
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
        printf("Diagonal elements are distinct.");
    else
        printf("Diagonal elements are not distinct.");

    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog1_day39.c -o prog1_day39
vardhjain0408@Mac ~ % ./prog1_day39
Enter the size of square matrix: 2
Enter the matrix elements:
12
23
23
34
Diagonal elements are distinct.%                                                                                                                                                                     
vardhjain0408@Mac ~ % 
*/
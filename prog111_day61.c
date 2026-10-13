#include <stdio.h>
int main(){
    int n, k, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter value of k: ");
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++){
        int found = 0;
        for(j = i; j < i + k; j++){
            if(arr[j] < 0){
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if(found == 0){
            printf("0 ");
        }
    }
    return 0;
}

/*vardhjain0408@Mac ~ % gcc prog111_day61.c -o prog111_day61
vardhjain0408@Mac ~ % ./prog111_day61
Enter size of array: 5
Enter array elements: 12
22
34
45
56
Enter value of k: 3
0 0 0 %                                                                                     
vardhjain0408@Mac ~ % ./prog111_day61
Enter size of array: 5
Enter array elements: 11
22
333
4
44
Enter value of k: 4
0 0 %                                                                                       
vardhjain0408@Mac ~ % */
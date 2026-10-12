#include <stdio.h>
int main(){
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int sum = 0;
    for (int i = 0; i < k; i++){
        sum = sum + arr[i];
    }
    int maxSum = sum;
    for (int i = k; i < n; i++){
        sum = sum - arr[i - k] + arr[i];
        if (sum > maxSum){
            maxSum = sum;
        }
    }
    printf("%d", maxSum);
    return 0;
}
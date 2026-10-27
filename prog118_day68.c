#include <stdio.h>
int main(){
    int n, arr[100];
    int i;
    int sum = 0, expectedSum, missing;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    expectedSum = n * (n + 1) / 2;
    missing = expectedSum - sum;
    printf("%d", missing);
    return 0;
}
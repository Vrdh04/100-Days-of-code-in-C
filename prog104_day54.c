#include <stdio.h>
int main() {
    int n, x;
    int leftSum = 0;
    int totalSum;
    scanf("%d", &n);
    totalSum = n * (n + 1) / 2;
    for (x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - leftSum + x;
        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
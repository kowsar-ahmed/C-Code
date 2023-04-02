#include <stdio.h>
#include <math.h>

int main() {
    // C programme to find sum of the series : "1^3 + 2^3 + ... + n^3 "
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (int) pow(i, 3);
    }
    printf("Sum of the series 1^3 + 2^3 + ... + %d^3 = %d\n", n, sum);

    return 0;
}
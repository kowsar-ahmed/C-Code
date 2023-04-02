#include <stdio.h>
#include <math.h>

int main() {
    // C programme to find sum of the series : "1^2 + 2^2 + ... + n^2 "
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (int) pow(i, 2);
    }
    printf("Sum of the series 1^2 + 2^2 + ... + %d^2 = %d\n", n, sum);

    return 0;
}

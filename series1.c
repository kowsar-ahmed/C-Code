#include <stdio.h>

int main() {
    // C programme to find sum of the series : "1+2+...+n"
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of the series 1 + 2 + ... + %d = %d\n", n, sum);

    return 0;
}

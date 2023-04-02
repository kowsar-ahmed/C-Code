#include <stdio.h>

int main() {
    // C programme to find sum of the series : "1+2+...+n"
    // Prompt the user to enter a value for n
    printf("Enter the value of n: ");

    // Read in the value of n
    int n;
    scanf("%d", &n);

    // Compute the sum of the series using a for loop
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the result
    printf("Sum of the series 1 + 2 + ... + %d = %d\n", n, sum);

    return 0;
}
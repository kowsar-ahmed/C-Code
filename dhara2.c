#include <stdio.h>
#include <math.h>

int main() {
    // Prompt the user to enter a value for n
    printf("Enter the value of n: ");

    // Read in the value of n
    int n;
    scanf("%d", &n);

    // Compute the sum of the series using a for loop and the pow() function
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (int) pow(i, 2);
    }

    // Print the result
    printf("Sum of the series 1^2 + 2^2 + ... + %d^2 = %d\n", n, sum);

    return 0;
}

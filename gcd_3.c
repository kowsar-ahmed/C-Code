#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, x;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    x = (a < b) ? a : b;

    while (x > 0) {
        if (a % x == 0 && b % x == 0) {
            printf("GCD of %d and %d is %d", a, b, x);
            break;
        } else {
            x--;
        }
    }

    getch();
    return 0;
}

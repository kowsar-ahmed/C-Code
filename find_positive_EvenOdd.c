#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    if (N > 0) {
        if (N % 2 == 0) {
            printf("Positive Even Number.\n");
        }
        else {
            printf("Positive Odd Number.\n");
        }
    }
    else {
        printf("The number isn't positive.\n");
    }

    return 0;
}

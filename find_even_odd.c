#include <stdio.h>
int counteven=0;
int countodd=0;
int main() {
    // C programme to input n different number and calculate the number of even and odd.
    int n;
    printf("How many numbers do you want to input? ==> ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        int x;
        scanf("%d",&x);
        if ( x%2 == 0 ) {
            counteven++;
        }
        else {
            countodd++;
        }
    }
    printf("Even : %d and Odd : %d",counteven,countodd);
    return 0;
}
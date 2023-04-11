#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,x;
    // collected from text book !!
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    
    x=(a<b)?a:b;
    again: if(a%x==0 && b%x==0)
    printf("GCD of %d and %d is %d",a,b,x);
    else {
        x=x-1;
    goto again;
    }
    getch();
} 

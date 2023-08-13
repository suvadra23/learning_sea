#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the divisor: ");
    scanf("%d",&b);
    c=a%b;
    d=a/b;
    printf("When %d is divided by %d \nThe remainder is %d \nThe quotient is %d",a,b,c,d);
}
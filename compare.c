#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else if(a==b)
    {
        printf("%d and %d are equal",a,b);
    }
    else
    {
        printf("%d is lesser than %d",a,b);
    }
}
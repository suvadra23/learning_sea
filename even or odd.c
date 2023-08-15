#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    b=a%2;
    if(b!=0)
    {
        printf("When %d is a odd number",a);
    }
    else
    {
        printf("When %d is a even number",a);
    }
    
    
}
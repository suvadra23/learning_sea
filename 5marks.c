#include <stdio.h>

int main() {
    int a,b,c,d,e,f,g;
    step1:
    printf("Enter the mark 1: ");
    scanf("%d",&a);
    if(a>100 || a<0)
    {
        printf("Invalid value");
        goto step1;
    }
    step2:
    printf("\nEnter the mark 2: ");
    scanf("%d",&b);
    if(b>100 || b<0)
    {
        printf("Invalid value");
        goto step2;
    }
    step3:
    printf("\nEnter the mark 3: ");
    scanf("%d",&c);
    if(c>100 || c<0)
    {
        printf("Invalid value");
        goto step3;
    }
    step4:
    printf("\nEnter the mark 4: ");
    scanf("%d",&d);
    if(d>100 || d<0)
    {
        printf("Invalid value");
        goto step4;
    }
    step5:
    printf("\nEnter the mark 5: ");
    scanf("%d",&e);
    if(e>100 || e<0)
    {
        printf("Invalid value");
        goto step5;
    }
    printf("\n***************************\n***************************\n");
    printf("\nThe mark 1 is: %d",a);
    printf("\nThe mark 2 is: %d",b);
    printf("\nThe mark 3 is: %d",c);
    printf("\nThe mark 4 is: %d",d);
    printf("\nThe mark 5 is: %d",e);
    f=(a+b+c+d+e);
    g=f/5;
    printf("\n***************************\n***************************\n");
    printf("\nThe total marks is %d",f);
    printf("\nThe average is %d",g);
    
    
}
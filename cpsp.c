#include <stdio.h>
int main()
{
    int cp,sp;
    float p,l;
    printf("Enter the Cost price : ");
    scanf("%d",&cp);
    printf("Enter the selling price : ");
    scanf("%d",&sp);
    if (sp>cp)
    {
        p=((sp-cp)*100)/cp;
        printf("The profit percentage is %.2f",p);
    }
    else if (sp<cp)
    {
        l=((cp-sp)*100)/cp;
        printf("The loss percentage is %.2f",l);
    }
    else
    {
        printf("It's neither loss nor profit");
    }
}
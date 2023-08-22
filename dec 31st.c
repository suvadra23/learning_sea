#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter a year : ");
    scanf("%d",&a);
    b=a%400;
    c=b/4;
    d=b-c;
    e=((c*2)+(d*1))%7;
    printf("Dec 31st is on : ");
    if(e==0)
    {
        printf("Sunday");
    }
    else if(e==1)
    {
        printf("Monday");
    }
    else if(e==2)
    {
        printf("Tuesday");
    }
    else if(e==3)
    {
        printf("Wednesday");
    }
    else if(e==4)
    {
        printf("Thursday");
    }
    else if(e==5)
    {
        printf("Friday");
    }
    else 
    {
        printf("Sunday");
    }
    
}
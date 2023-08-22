#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter a year : ");
    scanf("%d",&g);
    a=g-1;
    b=a%400;
    c=b/4;
    d=b-c;
    e=((c*2)+(d*1))%7;
    printf("The new year is on : ");
    if(e==0)
    {
        printf("Monday");
    }
    else if(e==1)
    {
        printf("Tuesday");
    }
    else if(e==2)
    {
        printf("Wednesday");
    }
    else if(e==3)
    {
        printf("Thursday");
    }
    else if(e==4)
    {
        printf("Friday");
    }
    else if(e==5)
    {
        printf("Saturday");
    }
    else 
    {
        printf("Sunday");
    }
    
}
#include <stdio.h>

int main() {
   int d, m, y;
   start:
   printf("Enter the year : ");
   scanf("%d", &y);
   if (y < 1000 || y > 3100) {
       printf("Enter a valid year!!\n");
       goto start; 
   }
   start2:
   printf("Enter the month : ");
   scanf("%d", &m);
   if (m < 1 || m > 12) 
   {
       printf("Enter a valid month\n");
       goto start2;
   }
   
   if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
   {
       printf("Enter the date : ");
       scanf("%d", &d);
       if ( (d < 1 || d > 31 ) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)) 
       {
           printf("Enter a valid date");
           
       } 
       else if ((d < 1 || d > 30 ) && (m == 4 || m == 6 || m == 9 || m == 11)) 
       {
           printf("Enter a valid date");
       } 
       else if ((d < 1 || d > 29 ) && (m == 2)) 
       {
           printf("Enter a valid date");
       }
   printf("%d/%d/%d", d, m, y);
  }
  else
   {
       printf("Enter the date : ");
       scanf("%d", &d);
       if ( (d < 1 || d > 31 ) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)) 
       {
           printf("Enter a valid date");
           
       } 
       else if ((d < 1 || d > 30 ) && (m == 4 || m == 6 || m == 9 || m == 11)) 
       {
           printf("Enter a valid date");
       }  
       else if ((d < 1 || d > 28 )&& (m == 2)) 
       {
           printf("Enter a valid date");
       }
   printf("%d/%d/%d", d, m, y);
  }
}
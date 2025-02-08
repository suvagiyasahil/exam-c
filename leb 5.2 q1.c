/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter value of the first number:-");
   scanf("%d",&a);
   
   printf("enter value of the second number:-");
   scanf("%d",&b);
   
   printf("enter value of the third number:-");
   scanf("%d",&c);
  
if(a<=b)
   {
       if(a<=c)
       {
           printf("%d minimum number.\n",a);
       }
       else
       {
           printf("%d minimum number.\n",c);
       }
   }
   else
   {
       if(b<=c)
       {
           printf("%d minimum number.\n",b);
       }
       else
       {
           printf("%d minimum number.\n",c);
       }
   }
   return 0;
}










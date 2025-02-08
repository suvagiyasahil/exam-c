#include<stdio.h>

int main()
{
    int a,b,c,d;
   printf("enter value of the first number:-");
   scanf("%d",&a);
   
   printf("enter value of the second number:-");
   scanf("%d",&b);
   
   printf("enter value of the third number:-");
   scanf("%d",&c);
   
   printf("enter value of the fourth number:-");
   scanf("%d",&d);
   
   
   if(a>=b)
   {
       if(a>=c)
       {
           if(a>=d)
           {
               printf("%d maximum number",a);
           }
           else
           {
               printf("%d maximum number",d);
           }
       }
       else
       {
           if(c>=d)
           {
               printf("%d maximu number",c);
           }
           else
           {
               printf("%d maximu number",d);
           }
       }
   }
   else
   {
       if(b>=c)
       {
           if(b>=d)
           {
               printf("%d maximu number",b);
           }
           else
           {
               printf("%d maximu number",d);
           }
       }
       else
       {
           if(c>=a)
           {
               if(c>=d)
               {
                   printf("%d maximu number",c);
               }
               else
               {
                   printf("%d maximu number",d);
               }
           }
        
       }
   }
   return 0;
}
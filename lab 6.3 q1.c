#include <stdio.h>

int main() 
{
    int x,i; 
     printf("enter eny number:-");
     scanf("%d",&x);
     
      int y=0,z;
     for(i=1;i<=x;i++)
     {
        z=y+i;
        y=z;
        
        if(i==x)
        {
            printf("sum of number:-%d",z);
        }
        
     }

    return 0;
}
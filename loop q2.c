#include<stdio.h>

int main()
{
    int num , count=1;
    
    printf("enter any number:- ");
    scanf("%d",&num);
    
    while(num>=10)
    {
        num=num/10;
        
        count++;
    }
    
      printf(" total num of digits:- %d ",count);
      
      return 0;
}
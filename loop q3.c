#include<stdio.h>

int main()
{
    int num , sum ,first,last;
    
    printf("enter any number:-");
    scanf("%d",&num);
    
    last= num%10;
    
    while(num>=10)
    {
        num=num/10;
        
    }
    
    first=num;
    
    sum=first+last;
    
    printf("the sum of firat and last digits:- %d ",sum);
    
    return 0;
}

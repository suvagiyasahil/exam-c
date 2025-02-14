# include<stdio.h>

int main()
{
    char ch='a';
    
    do
    {
        printf(" %c ",ch);
        ch = ch+4;
    }
    while(ch<='z');
    
    return 0;
}


-------------------------------------------------------------------------------------

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

-------------------------------------------------------------------------------------


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

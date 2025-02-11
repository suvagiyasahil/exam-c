#include<stdio.h>

int main()
{
    int i;
    printf("enter eny number:-");
    scanf("%d",&i);
    
    do
    {
        if(i%2==0)
        {
            printf("%d",i);
            i--;
        }
        else
        {
            i--;
        }
    }
    while(i>=0);
    
    return 0;
}
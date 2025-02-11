#include <stdio.h>

int main() 
{
    int a,b,c;
    
    printf("enter eny number:-");
    scanf("%d",&a);
    
    b=1;
    for(int i=a; i>=1;i--)
    {
        c=b*i;
        b=c;
        
        if(i==1)
        {
            printf("%d",c);
        }
    }

    return 0;
}
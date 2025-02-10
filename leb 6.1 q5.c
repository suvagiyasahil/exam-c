#include<stdio.h>

int main()
{
    int a,b;
    printf("enter first number:-");
    scanf("%d",&a);
    
    printf("enter second number:-");
    scanf("%d",&b);
    
    while(a<=b)
    {
        printf("%d", a );
        a = a+4;
    }
    return 0;
}
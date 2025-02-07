#include <stdio.h>

void check(int x)
{
    if(x >= 100)
    {
      printf("invalid input\n") ;
      
    }
    else if (x<=0)
    {
        printf("invalid input\n");
        
    }
    else
    {
      
    }

    
}


int main()
{   int x,y,z,a;
    float b ;
    printf("Enter maths marks :- ");
    scanf("%d",&x);
    check(x);
    printf("Enter English marks :- ");
    scanf("%d",&y);
    check(y);
    printf("Enter Science marks :- ");
    scanf("%d",&z);
    check(z);
    b = (x + y + z) / 3 ;
    printf("Your Average Marks are :- %f",b);
    return 0;
}
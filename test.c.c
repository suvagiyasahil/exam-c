#include <stdio.h>

int main()
{
    float a;
    printf("enter celsius :-");
    scanf("%f",&a);
    float d = (1.8*a)+ 32;
    printf("%.1f celsius tem. in fahrenheit is :-%.1f",a,d);
    

    return 0;
}


---------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    float bs;
    int hra = 10 , da = 5 , ta = 8;
    float Z;
     
     printf("enter your salary :-");
     scanf("%f",&bs);
     float h = bs*0.01*hra;
     float d = bs*0.01*da;
     float t = bs*0.01*ta;
     Z = bs+h+d+t;
     printf("salary :- %.2f",Z);
     return 0;
    
}

---------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>

int main()
{
    float x,y,z;
    printf("first angle:-");
    scanf("%f",&x);
    printf("second angle:-");
    scanf("%f",&y);
    float A = x + y;
    z = 180 - A;
    printf("third angle :- %f", z);
    return 0;
}
    



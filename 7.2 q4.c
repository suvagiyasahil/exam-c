#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j>=i)
            {
                if(j%2==0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

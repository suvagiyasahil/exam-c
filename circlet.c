#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%d",40 + j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

--------------------------------------------------------------

#include<stdio.h>

int main()
{
    int k=11;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(j<=i)
            {
                printf("%d",k);
                k++;
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

--------------------------------------------------------------

#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                printf("%d",j);
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

--------------------------------------------------------------

#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        int k=1;
        for(int j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("%d",k);
                (k==1)?k--:k++;
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

--------------------------------------------------------------

#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        int k=6-i;
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("%d",k);
                j<5?k++:k--;

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

--------------------------------------------------------------

#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        int k=1;
        for(int j=1;j<=10;j++)
        {
            if(j<=i||j>=11-i)
            {   if(i==5&&j==6) k--;
                printf("%d",k);
                j<6?k++:k--;

            }
            else
            {
                printf(" ");
                if (j == 5) k--;

            }
        }
        printf("\n");
    }

    return 0;
}

--------------------------------------------------------------

#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1||i==2||i==3||i==4||i==5)
            {
                if(i==2&&j==2||i==2&&j==3||i==2&&j==4||i==4&&j==2||i==4&&j==3||i==4&&j==4||i==4&&j==5||i==5&&j==2||i==5&&j==3||i==5&&j==4||i==5&&j==5)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf("  ");

            }
        }
        printf("\n");
    }

    return 0;
}




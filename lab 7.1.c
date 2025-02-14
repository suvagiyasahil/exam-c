/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf(" %d ",i-j+1);
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

------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf(" %d ",5-i+j);
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
------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf(" %d ",6-i);
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
------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf(" %d ",i);
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
------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf(" %d ",j);
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
------------------------------------------------------------------------------------------------------


#include <stdio.h>

int main() 
{
  int i,j;
  for (i = 1; i <=5; i++)
  {
      for (j = 1; j <= 5; j++)
      {
      if(j <=i)
      	// printf("*");
        printf("%c ", 65 + i-j );
      else
      	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}

------------------------------------------------------------------------------------------------------



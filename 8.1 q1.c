
#include <stdio.h>

int main()
{
    int n,num=0;
    printf("enter array size:");
    scanf("%d",&n);
    
int a[n];

  for (int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      num++;
  }
printf("length of an array: %d",num);

    return 0;
}
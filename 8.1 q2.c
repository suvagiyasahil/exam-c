
#include <stdio.h>

int main()
{
    int n,num=0,avg=0;
    printf("enter array size:");
    scanf("%d",&n);
    
int a[n];

  for (int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      avg = a[i] + avg;
      num++;
  }
  avg = avg/num;
printf("average of an array: %d",avg);

    return 0;
}
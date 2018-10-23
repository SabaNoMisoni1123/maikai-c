/*@‰‰K5-4@*/

#include <stdio.h>
int main(void)
{
  int i;
  int a[5];
  int b[5];

  for (i=0;i<5;i++) {
    printf("a[%d] :",i);  scanf("%d",&a[i]);
  }

  for (i=0;i<5;i++)
    b[i]=a[4-i];

  puts("  a   b ");
  puts("--------");

  for (i=0;i<5;i++)
    printf("%4d%4d\n",a[i],b[i]);

  return 0;
}
/*�@���K6-3�@*/
#include <stdio.h>

int cube (int a)
{
  return a*a*a;
}

int main(void)
{
  int x;

  printf("������3�悵�܂� :");
  scanf("%d",&x);

  printf("%d\n",cube(x));

  return 0;
}
/*�@���K6-4�@*/
#include <stdio.h>

int sqr (int a)
{
  return a*a;
}

int pow4 (int a)
{
  return (sqr(a))*(sqr(a));
}

int main(void)
{
  int x;

  printf("������4�悵�܂� :");
  scanf("%d",&x);

  printf("%d\n",pow4(x));

  return 0;
}
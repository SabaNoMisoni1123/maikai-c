/*�@���K6-1�@*/
#include <stdio.h>

int min2 (int a,int b)
{
  return (a<b) ?a:b;
}

int main(void)
{
  int a,b;

  puts("2�����̏������ق���Ԃ��܂��B");

  printf("����a :");  scanf("%d",&a);

  printf("����b :");  scanf("%d",&b);

  printf("�������̂�%d�ł��B\n",min2(a,b));

  return 0;
}
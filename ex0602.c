/*�@���K6-2�@*/
#include <stdio.h>

int min3 (int a,int b,int c)
{
  int min=a;

  if(b<min) min=b;

  if(c<min) min=c;

  return min;
}

int main(void)
{
  int a,b,c;

  puts("3�����̍ł����������̂�Ԃ��܂��B");

  printf("����a :");  scanf("%d",&a);

  printf("����b :");  scanf("%d",&b);

  printf("����c :");  scanf("%d",&c);

  printf("�ł��������̂�%d�ł��B\n",min3(a,b,c));

  return 0;
}
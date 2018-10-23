/*　演習6-1　*/
#include <stdio.h>

int min2 (int a,int b)
{
  return (a<b) ?a:b;
}

int main(void)
{
  int a,b;

  puts("2整数の小さいほうを返します。");

  printf("整数a :");  scanf("%d",&a);

  printf("整数b :");  scanf("%d",&b);

  printf("小さいのは%dです。\n",min2(a,b));

  return 0;
}
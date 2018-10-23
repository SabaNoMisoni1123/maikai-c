/*　演習6-2　*/
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

  puts("3整数の最も小さいものを返します。");

  printf("整数a :");  scanf("%d",&a);

  printf("整数b :");  scanf("%d",&b);

  printf("整数c :");  scanf("%d",&c);

  printf("最も小さいのは%dです。\n",min3(a,b,c));

  return 0;
}
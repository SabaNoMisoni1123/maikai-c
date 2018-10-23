/*　演習2-6（標準体重）　*/

#include <stdio.h>

int main(void)
{
  double x,y;

  printf("身長を入力してください :");
  scanf("%lf", &x);

  y=(x-100)*0.9;

  printf("あなたの標準体重は%.1fです。\n", y);

  return 0;
}
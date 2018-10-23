/*　演習3-11　数値の差の判定　*/

#include <stdio.h>

int main(void)
{
  double a,b;

  puts("実数を2つ入力してください。");

  printf("実数a :");  scanf("%lf", &a);
  printf("実数b :");  scanf("%lf", &b);

  if (a-b>10 || b-a>10) puts("それらの差は10より大きいです。");
  else puts("それらの差は10以下です。");

  return 0;
}
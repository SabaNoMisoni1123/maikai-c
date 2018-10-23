/*　演習3-10　3整数の関係（等しいかどうか）*/

#include <stdio.h>

int main(void)
{
  int A,B,C;

  puts("整数を3つ入力してください。");  /* printf("\a整数を３つ。%lf。\n",no); */

  printf("整数A :");  scanf("%d", &A);
  printf("整数B :");  scanf("%d", &B);
  printf("整数C :");  scanf("%d", &C);

  if (A==B && B==C) puts("3つの値は等しいです。");
  else if (A!=B && B!=C &&C!=A) puts("3つの値は異なります。");
  else puts("2つの値が等しいです。");

  return 0;
}
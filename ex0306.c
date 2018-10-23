/*　演習3-6（ifを使って3整数の最小をみつける）　*/

#include <stdio.h>

int main(void)
{
  int n1,n2,n3,min;

  puts("整数を３つ入力してください。");
  scanf("%d%d%d", n1,n2,n3);

  min=n1

  if (min>n2)  min=n2;
  if (min>n3)  min=n3;

  printf("最小値は%dです。", min);

  return 0;
}
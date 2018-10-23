/*　演習3-3（絶対値）　*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください :");
  scanf("%d", &no);

  if (no>=0)
    printf("入力した整数の絶対値は%dです。\n", no);
  else
    printf("入力した整数の絶対値は%dです。\n", -no);

  return 0;
}
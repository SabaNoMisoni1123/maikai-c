/*　演習５（打ち込んだ数値に定数を足す）　*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください :");
  scanf("%d", &no);

  printf("入力した整数に５足した値は%dです。\n", no +5);

  return 0;
} 
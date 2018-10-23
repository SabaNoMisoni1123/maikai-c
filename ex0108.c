/*　演習1-8（入力値の積）　*/

#include <stdio.h>

int main(void)
{
  int x,y;

  puts("2つ整数を入力してください。");

  printf("整数１ :");   scanf("%d", &x);
  printf("整数２ :");   scanf("%d", &y);

  printf("2整数の積は%dです。\n", x*y);

  return 0;
}
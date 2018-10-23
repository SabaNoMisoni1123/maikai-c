/*　演習3-1（約数判定）　*/

#include <stdio.h>

int main(void)
{
  int a,b;

  puts("整数を２つ入力してください。");

  printf("整数a :");   scanf("%d", &a);
  printf("整数b :");   scanf("%d", &b);

  if (a%b)
    puts("bはaの約数ではありません。");
  else
    puts("bはaの約数です。");

  return 0;
}
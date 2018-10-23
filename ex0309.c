/*　演習3-9（2つの整数が等しいかifを使わずに）　*/

#include <stdio.h>

int main(void)
{
  int a,b,max;

  puts("整数を2つ入力してください");

  printf("整数a :");  scanf("%d", &a);
  printf("整数b :");  scanf("%d", &b);

  max=(a==b) ? puts("aとbは等しい。") : puts("aとbは異なる。");  

  return 0;
}
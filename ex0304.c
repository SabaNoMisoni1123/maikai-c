/*�@���K3-4�i�召�֌W�j�@*/

#include <stdio.h>

int main(void)
{
  int A,B;

  puts("2��������͂��Ă��������B");

  printf("����A :");  scanf("%d", &A);
  printf("����B :");  scanf("%d", &B);

  if (A==B)  puts("A��B�͓������ł��B");
  else if (A>B)  puts("A��B���傫���ł��B");
  else  puts("A��B��菬�����ł��B");

  return 0;
}
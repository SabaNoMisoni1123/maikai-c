/*�@���K3-1�i�񐔔���j�@*/

#include <stdio.h>

int main(void)
{
  int a,b;

  puts("�������Q���͂��Ă��������B");

  printf("����a :");   scanf("%d", &a);
  printf("����b :");   scanf("%d", &b);

  if (a%b)
    puts("b��a�̖񐔂ł͂���܂���B");
  else
    puts("b��a�̖񐔂ł��B");

  return 0;
}
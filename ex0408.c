/*�@���K4-8�@*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("��������͂��Ă������� :");
  scanf("%d", &no);

  if (no>=1)
  {
    while (no-->0) putchar('*');

    printf("\n");
  }

  return 0;
}
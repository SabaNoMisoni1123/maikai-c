/*�@���K4-7�@*/

#include <stdio.h>

int main(void)
{
  int no,i;

  printf("��������͂��ĉ����� :");
  scanf("%d", &no);

  i=2;

  while (i<=no)
  {
    printf("%d  ",i);

    i*=2;
  }

  printf("\n");

  return 0;
}
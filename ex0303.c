/*�@���K3-3�i��Βl�j�@*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("��������͂��Ă������� :");
  scanf("%d", &no);

  if (no>=0)
    printf("���͂��������̐�Βl��%d�ł��B\n", no);
  else
    printf("���͂��������̐�Βl��%d�ł��B\n", -no);

  return 0;
}
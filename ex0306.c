/*�@���K3-6�iif���g����3�����̍ŏ����݂���j�@*/

#include <stdio.h>

int main(void)
{
  int n1,n2,n3,min;

  puts("�������R���͂��Ă��������B");
  scanf("%d%d%d", n1,n2,n3);

  min=n1

  if (min>n2)  min=n2;
  if (min>n3)  min=n3;

  printf("�ŏ��l��%d�ł��B", min);

  return 0;
}
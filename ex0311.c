/*�@���K3-11�@���l�̍��̔���@*/

#include <stdio.h>

int main(void)
{
  double a,b;

  puts("������2���͂��Ă��������B");

  printf("����a :");  scanf("%lf", &a);
  printf("����b :");  scanf("%lf", &b);

  if (a-b>10 || b-a>10) puts("�����̍���10���傫���ł��B");
  else puts("�����̍���10�ȉ��ł��B");

  return 0;
}
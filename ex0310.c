/*�@���K3-10�@3�����̊֌W�i���������ǂ����j*/

#include <stdio.h>

int main(void)
{
  int A,B,C;

  puts("������3���͂��Ă��������B");  /* printf("\a�������R�B%lf�B\n",no); */

  printf("����A :");  scanf("%d", &A);
  printf("����B :");  scanf("%d", &B);
  printf("����C :");  scanf("%d", &C);

  if (A==B && B==C) puts("3�̒l�͓������ł��B");
  else if (A!=B && B!=C &&C!=A) puts("3�̒l�͈قȂ�܂��B");
  else puts("2�̒l���������ł��B");

  return 0;
}
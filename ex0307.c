/*�@4�̐����̍ő�iif�����Ȃ��j�@*/

#include <stdio.h>

int main(void)
{
  int M,M1,M2,a,b,c,d;

  puts("������4���͂��Ă�������");
  scanf("%d%d%d%d",&a,&b,&c,&d);

  if (a>=b)  M1=a;
  else  M1=b;

  if (c>=d)  M2=c;
  else  M2=d;

  M=M1;

  if (M2>M1)  M=M2;

  printf("�ő�l��%d�ł��B\n",M);

  return 0;
}
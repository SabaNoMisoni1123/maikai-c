/*�@���K4-12�@*/

#include <stdio.h>

int main(void)
{
  int no,r;

  do
  {
    printf("���̐�������͂��Ă������� :");
    scanf("%d",&no);

    if (no<=0) printf("\a%d�͐��̐����ł͂���܂���B\n",no);
  } while (no<=0);

  r=0;

  printf("%d��",no);

  while (no>0)
  {
    r+=1;

    no/=10;
  };

  printf("%d���ł��B\n",r);

  return 0;
}
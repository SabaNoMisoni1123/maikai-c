/*�@���K4-13�@*/

#include <stdio.h>

int main(void)
{
  int no,p;
  int q=0;

  do
  {
    printf("���̐�������͂��Ă������� :");
    scanf("%d",&no);

    if (no<=0) printf("\a%d�͐��̐����ł͂���܂���B\n",no);
  } while (no<=0);  

  for (p=1; p<=no; p++)
  {
    q+=p;
  }

  printf("1����%d�܂ł̘a��%d�ł��B\n",no,q);

  return 0;
}
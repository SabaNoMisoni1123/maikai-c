/*�@���K5-7�@*/
#include <stdio.h>

#define NOMBER 30  /*�f�[�^���̏��*/

int main(void)
{
  puts("�f�[�^�����w�肵�Ă��̕����l����͂��Ă��������B");

  int no,i;
  int v[NOMBER];

  do {
    printf("�f�[�^�� :");  scanf("%d",&no);

    if (no<1 || no>NOMBER)
      printf("�f�[�^���Ƃ��Ďw��ł��܂���i%d�ȉ��Łj",NOMBER);
  }while (no<1 || no>NOMBER);

  for (i=0 ; i<no ; i++) {
    printf("%d�� :",i+1);
    scanf("%d",&v[i]);
  }

  putchar('{');
  for (i=0 ; i<no-1 ; i++)
    printf("%d, ",v[i]);
  printf("%d}\n",v[i]);

  return 0;
} 
/*�@���K4-23�i���j�@*/

#include <stdio.h>
int main(void)
{
  puts("���p�񓙕ӎO�p�`��*�ŕ`���܂��B");

  int k,l,i,j;

  do
  {
    printf("�Z�ӂ̒�������� :");  scanf("%d",&l);
  }while (l<=0);

  do
  {
    puts("���p�̊p�̈ʒu�����߂܂��B");

    printf("�E��c�P�@����c�Q�@�E���c�R�@�����c�S   :");  scanf("%d",&k);
  }while (k<1 || k>4);

  switch (k)
  {

    case 1 :
    {
      for(i=1 ; i<=l ; i++)
      {
        for(j=1 ; j<i ; j++)  putchar(' ');
        for(j=1 ; j<=l-i+1 ; j++)  putchar('*');

        putchar('\n');
      }
    }break;

    case 2 :
    {
      for(i=1 ; i<=l ; i++)
      {
        for(j=1 ; j<=l-i+1 ; j++)  putchar('*');
        for(j=1 ; j<i ; j++)  putchar(' ');

        putchar('\n');
      }
    }break;

    case 3 :
    {
      for(i=1 ; i<=l ; i++)
      {
        for(j=1 ; j<=l-i ; j++)  putchar(' ');
        for(j=1 ; j<=i ; j++)  putchar('*');

        putchar('\n');
      }
    }break;

    case 4 :
    {
      for(i=1 ; i<=l ; i++)
      {
        for(j=1 ; j<=i ; j++)  putchar('*');
        for(j=1 ; j<=l-i ; j++)  putchar(' ');

        putchar('\n');
      }
    }break;
  }

  return 0;
}
/*�@���K4-21�@*/

#include <stdio.h>

int main(void)
{
  puts("*���g���Đ����`��`���܂��B");

  int no;

  do
  {
    printf("��ӂ̒��� :");  scanf("%d",&no);
  } while (no<=0);

  int i,j;

  for ( i=1 ; i<=no ; i++ )
  {
    for ( j=1 ; j<=no ; j++ )  putchar('*');

    putchar('\n');
  }

  return 0;
}
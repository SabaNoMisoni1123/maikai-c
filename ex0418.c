/*�@���K4-18�@*/


#include <stdio.h>

int main(void)

{

  puts("*��l�Ɍ����ĂĂT��ɐ��񂳂��܂��B");



  int no,i;



  printf("�l������͂��Ă������� :");  scanf("%d",&no);



  for ( i=1 ; i<=no ; i++ )

  {

    putchar('*');


    if (i%5==0)  putchar('\n');

  }



  if (no%5) putchar('\n');



  return 0;

}
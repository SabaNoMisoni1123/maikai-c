/*�@���K4-16�@*/


#include <stdio.h>

int main(void)

{


  int no, i;



  puts("���R������͂��Ă��������B����ȉ��̊�����ׂĕ\\�����܂��B");



  do

  {

    printf("���R�� :");  scanf("%d",&no);


    if (no<=0) puts("���R���ł͂���܂���B");

  } while(no<=0);



  for ( i=1 ; i<=no ; i+=2 )  printf("%d  ",i);



  printf("\n");



  return 0;

}
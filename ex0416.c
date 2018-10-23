/*　演習4-16　*/


#include <stdio.h>

int main(void)

{


  int no, i;



  puts("自然数を入力してください。それ以下の奇数をすべて表\示します。");



  do

  {

    printf("自然数 :");  scanf("%d",&no);


    if (no<=0) puts("自然数ではありません。");

  } while(no<=0);



  for ( i=1 ; i<=no ; i+=2 )  printf("%d  ",i);



  printf("\n");



  return 0;

}
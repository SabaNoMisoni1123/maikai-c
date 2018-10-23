/*　演習4-18　*/


#include <stdio.h>

int main(void)

{

  puts("*を人に見立てて５列に整列させます。");



  int no,i;



  printf("人数を入力してください :");  scanf("%d",&no);



  for ( i=1 ; i<=no ; i++ )

  {

    putchar('*');


    if (i%5==0)  putchar('\n');

  }



  if (no%5) putchar('\n');



  return 0;

}
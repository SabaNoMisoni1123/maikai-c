/*　演習4-22　*/


#include <stdio.h>


int main(void)

{
  puts("横長の長方形を*で描きます。");
  int a,b;
  int H,L;



  do

  {

    printf("一辺（その1） :");  scanf("%d",&a);

    printf("一辺（その2） :");  scanf("%d",&b);

    

  } while (a<=0 || b<=0);



  if (a>b) {H=a;  L=b;}

  else {L=a;  H=b;}





  int i,j;

  for (i=1 ; i<=L ; i++)
  {
    for (j=1 ; j<=H ; j++)  printf("* ");

    printf("\n\n");
  }

  return 0;

}
/*�@���K4-22�@*/


#include <stdio.h>


int main(void)

{
  puts("�����̒����`��*�ŕ`���܂��B");
  int a,b;
  int H,L;



  do

  {

    printf("��Ӂi����1�j :");  scanf("%d",&a);

    printf("��Ӂi����2�j :");  scanf("%d",&b);

    

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
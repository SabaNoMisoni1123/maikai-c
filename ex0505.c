/*　演習5-5　*/

#include <stdio.h>

#define NOMBER 19  /*配列の個数*/

int main(void)
{
  int i;
  int x[NOMBER];

  for (i=0;i<NOMBER;i++) {
    printf("x[%d] :",i);  scanf("%d",&x[i]);  /*数値の入力*/
  }

  if (NOMBER%2==0)  /*偶数個の反転*/
    for (i=0;i<=NOMBER/2;i++) {
      int temp=x[i];
      x[i]=x[(NOMBER-1)-i];
      x[(NOMBER-1)-i]=temp;
    }
  

  else   /*奇数個の反転*/
    for (i=0;i<=(NOMBER-1)/2;i++) {
      int temp=x[i];
      x[i]=x[(NOMBER-1)-i];
      x[(NOMBER-1)-i]=temp;
    }

  puts("反転しました。");

  for (i=0;i<NOMBER;i++)   /*出力*/
    printf("x[%d]=%d\n",i,x[i]);  

  return 0;
}

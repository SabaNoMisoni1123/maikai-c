/*�@���K5-5�@*/

#include <stdio.h>

#define NOMBER 19  /*�z��̌�*/

int main(void)
{
  int i;
  int x[NOMBER];

  for (i=0;i<NOMBER;i++) {
    printf("x[%d] :",i);  scanf("%d",&x[i]);  /*���l�̓���*/
  }

  if (NOMBER%2==0)  /*�����̔��]*/
    for (i=0;i<=NOMBER/2;i++) {
      int temp=x[i];
      x[i]=x[(NOMBER-1)-i];
      x[(NOMBER-1)-i]=temp;
    }
  

  else   /*��̔��]*/
    for (i=0;i<=(NOMBER-1)/2;i++) {
      int temp=x[i];
      x[i]=x[(NOMBER-1)-i];
      x[(NOMBER-1)-i]=temp;
    }

  puts("���]���܂����B");

  for (i=0;i<NOMBER;i++)   /*�o��*/
    printf("x[%d]=%d\n",i,x[i]);  

  return 0;
}

/*�@���K4-17�@*/

#include <stdio.h>
int main(void)
{
  int no,i;

  do
  {
    printf("n�̒l�i���R���j :");  scanf("%d",&no);
  } while(no<=0);

  for ( i=1 ; i<=no ; i++ )  printf("%d��2���%d�ł��B\n",i,i*i);

  return 0;
}
  
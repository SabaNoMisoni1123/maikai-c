/*　演習4-19　*/

#include <stdio.h>
int main(void)
{
  puts("約数を全て上げます。");

  int no,i;

  int count=0;

  do
  {
    printf("nの値（自然数） :");  scanf("%d",&no);
  } while(no<=0);

  for ( i=1 ; i<=no ; i++ )
  {
    if (no%i==0)
    {
      printf("%d\n",i);

      count+=1;
    }
  }

  printf("%dの約数は%d個です。",no,count);

  return 0;
}
  
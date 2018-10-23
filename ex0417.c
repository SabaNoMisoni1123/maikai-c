/*　演習4-17　*/

#include <stdio.h>
int main(void)
{
  int no,i;

  do
  {
    printf("nの値（自然数） :");  scanf("%d",&no);
  } while(no<=0);

  for ( i=1 ; i<=no ; i++ )  printf("%dの2乗は%dです。\n",i,i*i);

  return 0;
}
  
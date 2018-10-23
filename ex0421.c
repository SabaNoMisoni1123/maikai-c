/*　演習4-21　*/

#include <stdio.h>

int main(void)
{
  puts("*を使って正方形を描きます。");

  int no;

  do
  {
    printf("一辺の長さ :");  scanf("%d",&no);
  } while (no<=0);

  int i,j;

  for ( i=1 ; i<=no ; i++ )
  {
    for ( j=1 ; j<=no ; j++ )  putchar('*');

    putchar('\n');
  }

  return 0;
}
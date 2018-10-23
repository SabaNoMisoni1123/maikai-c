/*　演習4-23（改）　*/

#include <stdio.h>
int main(void)
{
  puts("直角二等辺三角形を*で描きます。");

  int k,l,i,j;

  do
  {
    printf("短辺の長さを入力 :");  scanf("%d",&l);
  }while (l<=0);

  do
  {
    puts("直角の角の位置を決めます。");

    printf("右上…１　左上…２　右下…３　左下…４   :");  scanf("%d",&k);
  }while (k<1 || k>4);

  switch (k)
  {

    case 1 :
    {
      for(i=1 ; i<=l ; i++)
      {
        for(j=1 ; j<i ; j++)  putchar(' ');
        for(j=1 ; j<=l-i+1 ; j++)  putchar('*');

        putchar('\n');
      }
    }break;

    case 2 :
    {
      for(i=1 ; i<=l ; i++)
      {
        for(j=1 ; j<=l-i+1 ; j++)  putchar('*');
        for(j=1 ; j<i ; j++)  putchar(' ');

        putchar('\n');
      }
    }break;

    case 3 :
    {
      for(i=1 ; i<=l ; i++)
      {
        for(j=1 ; j<=l-i ; j++)  putchar(' ');
        for(j=1 ; j<=i ; j++)  putchar('*');

        putchar('\n');
      }
    }break;

    case 4 :
    {
      for(i=1 ; i<=l ; i++)
      {
        for(j=1 ; j<=i ; j++)  putchar('*');
        for(j=1 ; j<=l-i ; j++)  putchar(' ');

        putchar('\n');
      }
    }break;
  }

  return 0;
}
/*　演習4-24　*/
#include <stdio.h>
int main(void)
{
  puts("逆ピラミッドを数字で作ります。");

  int l;

  do {
    printf("何段ですか。");  scanf("%d",&l);
  } while(l<=0);

  int i,j;

  for (i=1 ; i<=l ; i++) {
    for (j=1 ; j<=i-1 ; j++) putchar(' ');

    for (j=1 ; j<=(l-i)*2+1 ; j++) printf("%d",i%10);

    for (j=1 ; j<=i-1 ; j++) putchar(' ');

    putchar('\n');
  }

  return 0;
}
/*　演習4-20　*/

#include <stdio.h>

int main(void)
{
  puts("九九を表\示します。");

  printf("  |");

  int i,j;

  for ( i=1 ; i<=9 ; i++ )  printf(" %2d",i);

  putchar('\n');           /*１段目ここまで*/

  printf("--+");

  for ( i=1 ; i<=9 ; i++ ) printf("---");

  putchar('\n');          /*２段目ここまで*/

  for ( i=1 ; i<=9 ; i++ )
  {
    printf("  |");

    for ( j=1 ; j<=9 ; j++ )  printf(" %2d",j*i);

    if (i!=9) printf("\n  |\n");
  }

  return 0;
}
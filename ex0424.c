/*�@���K4-24�@*/
#include <stdio.h>
int main(void)
{
  puts("�s���~�b�h��*�ō��܂��B");

  int l;

  do {
    printf("���i�ł����B");  scanf("%d",&l);
  } while(l<=0);

  int i,j;

  for (i=1 ; i<=l ; i++) {
    for (j=1 ; j<=l-i ; j++) putchar(' ');

    for (j=1 ; j<=(2*i-1) ; j++) putchar('*');

    for (j=1 ; j<=l-i ; j++) putchar(' ');

    putchar('\n');
  }

  return 0;
}
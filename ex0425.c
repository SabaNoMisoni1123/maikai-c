/*�@���K4-24�@*/
#include <stdio.h>
int main(void)
{
  puts("�t�s���~�b�h�𐔎��ō��܂��B");

  int l;

  do {
    printf("���i�ł����B");  scanf("%d",&l);
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
/*�@���K6-6�@*/

#include <stdio.h>

void alert (int n) {

  while (n>0) {
    putchar('\a');

    n--;
  }
}

int main(void) {

  int n;

  puts("n��A���[���𔭂��܂��B");

  do{
    printf("n :");  scanf("%d",&n);
  }while(n<=0);

  alert(n);

  return 0;
}
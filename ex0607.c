/*　演習6-7　*/

#include <stdio.h>

void hello(void){
  puts("こんにちは。");
}

int main(void){
  int ans;

  printf("挨拶する　　する：１　しない：0  :");  scanf("%d",&ans);

  if(ans==1) hello();

  return 0;
}
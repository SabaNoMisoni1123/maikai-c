/*　演習10-1　*/
#include <stdio.h>
void adjust_point(int *n){
  if(*n<0)
    *n=0;
  if(*n>100)
    *n=100;
}

int main(void){
  int n;
  puts("整数を入力してください。");
  
  printf("入力 :");
  scanf("%d",&n);
  
  puts("0以上100以下にします。");
  
  adjust_point(&n);
  printf("結果 :%d",n);
  
  return 0;
}
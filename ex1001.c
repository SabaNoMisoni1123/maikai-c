/*�@���K10-1�@*/
#include <stdio.h>
void adjust_point(int *n){
  if(*n<0)
    *n=0;
  if(*n>100)
    *n=100;
}

int main(void){
  int n;
  puts("��������͂��Ă��������B");
  
  printf("���� :");
  scanf("%d",&n);
  
  puts("0�ȏ�100�ȉ��ɂ��܂��B");
  
  adjust_point(&n);
  printf("���� :%d",n);
  
  return 0;
}
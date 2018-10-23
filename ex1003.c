/*　演習10-3　*/
#include <stdio.h>
/*2つのオブジェクトの値を交換（手続き）*/
void swap(int *n1, int *n2){
  int temp=*n1;
  *n1=*n2;
  *n2=temp;
}

void sort2(int *n1,int *n2){
  if(*n1>*n2)
    swap(n1,n2);
}

void sort3(int *n1,int *n2,int *n3){
  sort2(n1,n2);
  sort2(n2,n3);
  sort2(n1,n2);
}

int main(void){
  int a,b,c;
  puts("整数を3つ入力。");
  printf("入力 :");   scanf("%d",&a);
  printf("入力 :");   scanf("%d",&b);
  printf("入力 :");   scanf("%d",&c);
  
  sort3(&a,&b,&c);
  puts("ソ\ート結果");
  printf("%d\n%d\n%d\n",a,b,c);
  
  return 0;
}


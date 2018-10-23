/*　演習8-3　*/
#include <stdio.h>
#define swap(type,a,b) {type temp; temp=a; a=b; b=temp;}

int main(void){
  int x,y;
  double i,j;
  puts("2整数の入力　入れ替え");
  printf("x :");  scanf("%d",&x);
  printf("y :");  scanf("%d",&y);
  swap(int,x,y)
  
  printf("x=%d  y=%d\n",x,y);
  
  puts("2実数の入力　入れ替え");
  printf("i :");  scanf("%lf",&i);
  printf("j :");  scanf("%lf",&j);
  swap(double,i,j)
  
  printf("i=%f  j=%f\n",i,j);
  
  return 0;
}
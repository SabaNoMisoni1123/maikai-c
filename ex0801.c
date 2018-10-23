/*　演習8-1　*/
#include<stdio.h>
#define diff(x,y) (((x)>(y))? ((x)-(y)):((y)-(x)))

int main(void){
  int x,y;
  double i,j;
  puts("2整数の入力　差の表\示");
  printf("x :");  scanf("%d",&x);
  printf("y :");  scanf("%d",&y);
  
  printf("差は　%d\n",diff(x,y));
  
  puts("2実数の入力　差の表\示");
  printf("i :");  scanf("%lf",&i);
  printf("j :");  scanf("%lf",&j);
  
  printf("差は　%f\n",diff(i,j));
  
  return 0;
}
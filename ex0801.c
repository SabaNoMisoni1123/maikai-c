/*�@���K8-1�@*/
#include<stdio.h>
#define diff(x,y) (((x)>(y))? ((x)-(y)):((y)-(x)))

int main(void){
  int x,y;
  double i,j;
  puts("2�����̓��́@���̕\\��");
  printf("x :");  scanf("%d",&x);
  printf("y :");  scanf("%d",&y);
  
  printf("���́@%d\n",diff(x,y));
  
  puts("2�����̓��́@���̕\\��");
  printf("i :");  scanf("%lf",&i);
  printf("j :");  scanf("%lf",&j);
  
  printf("���́@%f\n",diff(i,j));
  
  return 0;
}
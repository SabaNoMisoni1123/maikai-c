/*　演習12-2　*/
#include <stdio.h>
#include <string.h>

#define NAME_LEN 32

struct student {
  char name[NAME_LEN];
  int hight;
  float weight;
  long schols;
};

int main(){
  struct student sanaka;
  
  printf("名前を入力 :");
  scanf("%s",sanaka.name);
  
  printf("身長を入力 :");
  scanf("%d",&sanaka.hight);
  
  printf("体重を入力 :");
  scanf("%f",&sanaka.weight);
  
  printf("奨学金の額を入力 :");
  scanf("%ld",&sanaka.schols);
  
  putchar('\n')
  
  printf("氏　名 :%s\n",sanaka.name);
  printf("身　長 :%d\n",sanaka.hight);
  printf("体　重 :%f\n",sanaka.weight);
  printf("奨学金 :%ld\n",sanaka.schols);
  
  
  return 0;
}
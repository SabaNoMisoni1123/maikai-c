/*�@���K12-2�@*/
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
  
  printf("���O����� :");
  scanf("%s",sanaka.name);
  
  printf("�g������� :");
  scanf("%d",&sanaka.hight);
  
  printf("�̏d����� :");
  scanf("%f",&sanaka.weight);
  
  printf("���w���̊z����� :");
  scanf("%ld",&sanaka.schols);
  
  putchar('\n')
  
  printf("���@�� :%s\n",sanaka.name);
  printf("�g�@�� :%d\n",sanaka.hight);
  printf("�́@�d :%f\n",sanaka.weight);
  printf("���w�� :%ld\n",sanaka.schols);
  
  
  return 0;
}
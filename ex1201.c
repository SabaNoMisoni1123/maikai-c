/*@‰‰K12-1@*/
#include <stdio.h>
#include <string.h>

#define NAME_LEN 20

struct student {
  char name[NAME_LEN];
  int hight;
  float weight;
  long schols;
};

int main(){
  struct student takao;
  
  printf("%p\n",&takao.name);
  printf("%p\n",&takao.hight);
  printf("%p\n",&takao.weight);
  printf("%p\n",&takao.schols);
  
  return 0;
}
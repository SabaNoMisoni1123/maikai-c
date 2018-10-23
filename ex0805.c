/*Å@ââèK8-5Å@*/
#include <stdio.h>
enum sex {man,woman,invalid };

void m(void){
  puts("I am a man.");
}

void wom(void){
  puts("I am a woman.");
}

enum sex select(void){
  int temp;
  
  do{
    printf("man..0  woman..1  invalid..2 :");
    scanf("%d",&temp);
  }while(temp<man || temp>invalid);
  
  return temp;
}

int main(void){
  enum sex selected;
  
  do{
    switch(selected=select()){
      case man : m(); break;
      case woman : wom(); break;
    }
  }while(selected!=invalid);
  
  return 0;
}
  
/*@‰‰K7-10@*/
#include <stdio.h>

int main(void){
  float x=0.0;
  int i=0;
  int count;
  
  for(count=0;count<=100;count++){
    printf("x=%f      x=%f\n",x,(double)i/100.0);
    
    x+=0.01;
    i++;
  }
  
  return 0;
}
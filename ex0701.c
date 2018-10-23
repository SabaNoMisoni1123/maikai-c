/*Å@ââèK7-1Å@*/
#include<stdio.h>
int main(void){
  int n;
  
  printf("sizeof 1:%d\n",sizeof 1);
  printf("sizeof+1:%d\n",sizeof+1);
  printf("sizeof-1:%d\n",sizeof-1);
  printf("sizeof (unsigned)-1:%d\n",sizeof(unsigned)-1);
  printf("sizeof (double)-1:%d\n",sizeof(double)-1);
  printf("sizeof((double)-1):%d\n",sizeof((double)-1));
  printf("sizeof n+2:%d\n",sizeof n+2);
  printf("sizeof (n+2):%d\n",sizeof (n+2));
  printf("sizeof (n+2.0):%d\n",sizeof (n+2.0));
  
  return 0;
}
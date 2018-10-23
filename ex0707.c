/*Å@ââèK7-7Å@*/
#include <stdio.h>
int main(void){
  float a;
  double b;
  long double c;
  
  printf("float a :");  scanf("%f",&a);
  printf("double b :"); scanf("%lf",&b);
  printf("long double c :");  scanf("%lf",&c);
  
  printf("a=%f\nb=%f\nc=%Lf\n",a,b,c);
  
  return 0;
}
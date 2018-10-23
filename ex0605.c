/*　演習6-5　*/
#include <stdio.h>

int sumup (int a)
{
  int sum=0;

  while(a>0){
    sum+=a;
    a--;
  }
  return sum;
}



int main(void)
{
  int x;

  puts("1からnまでの全整数の和を計算します。");

  do{
    printf("自然数 :");
    scanf("%d",&x);
  }while(x<=0);

  printf("%d\n",sumup(x));

  return 0;
}
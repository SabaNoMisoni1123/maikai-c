/*�@���K6-5�@*/
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

  puts("1����n�܂ł̑S�����̘a���v�Z���܂��B");

  do{
    printf("���R�� :");
    scanf("%d",&x);
  }while(x<=0);

  printf("%d\n",sumup(x));

  return 0;
}
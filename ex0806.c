/*　演習8-6　*/
#include <stdio.h>

/*自然数入力*/
int scan_pint (void){
  int no;

  do{
    printf("入力 :");
    scanf("%d",&no);

    if(no<=0)  puts("自然数で入力してください。");
  }while(no<=0);

  return no;
}

int factorial(void){
  int x=scan_pint();
  int temp=1;
  int i;
  
  for(i=1;i<=x;i++)
    temp*=i;
  
  return temp;
}

int main(void){
  puts("階乗します。");
  
  printf("%d",factorial());
  
  return 0;
}

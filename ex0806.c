/*�@���K8-6�@*/
#include <stdio.h>

/*���R������*/
int scan_pint (void){
  int no;

  do{
    printf("���� :");
    scanf("%d",&no);

    if(no<=0)  puts("���R���œ��͂��Ă��������B");
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
  puts("�K�悵�܂��B");
  
  printf("%d",factorial());
  
  return 0;
}

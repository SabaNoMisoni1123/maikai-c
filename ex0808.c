/*�@���K8-8�@*/
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

/*���[�N���b�h�̌ݏ��@*/
int gcd1(const int x,const int y){
  int a,b,r;
  
  a=(x>y)? x:y;
  b=(x>y)? y:x;
  
  while((r=a%b)!=0){
    a=b;
    b=r;
  }
  return b;
}

/*�ő���񐔔���*/
int gcd2(const int x,const int y){
  int i;
  i=(x<y)? x:y;
  
  while((x%i!=0)||(y%i!=0))
    i--;
  
  return i;
}

int main(void){
  puts("�ő���񐔂��v�Z���܂��B");
  
  int x=scan_pint();
  int y=scan_pint();
  
  printf("���[�N���b�h�̌ݏ��@ :%d\n",gcd1(x,y));
  printf("�P���ȍő���񐔔��� :%d\n",gcd2(x,y));
  
  return 0;
}

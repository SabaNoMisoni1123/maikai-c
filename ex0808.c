/*　演習8-8　*/
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

/*ユークリッドの互除法*/
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

/*最大公約数発見*/
int gcd2(const int x,const int y){
  int i;
  i=(x<y)? x:y;
  
  while((x%i!=0)||(y%i!=0))
    i--;
  
  return i;
}

int main(void){
  puts("最大公約数を計算します。");
  
  int x=scan_pint();
  int y=scan_pint();
  
  printf("ユークリッドの互除法 :%d\n",gcd1(x,y));
  printf("単純な最大公約数発見 :%d\n",gcd2(x,y));
  
  return 0;
}

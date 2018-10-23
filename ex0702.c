/*　演習7-2　*/
#include <stdio.h>
#include <math.h>

/*非負数の入力*/
unsigned scan_uint(void){
  unsigned no;
  do{  
    puts("非負数を入力してください。");
    printf("非整数（no） :");  scanf("%u",&no);
  }while(no<1);
  return no;
}

/*自然数入力*/
int scan_pint (void){
  int no;

  do{
    puts("自然数を入力してください。");

    printf("自然数（shift） :");  scanf("%d",&no);

    if(no<=0)  puts("自然数ではありません。");
  }while(no<=0);

  return no;
}

/*n乗（整数）*/
int pown (const int a,int n){
  int cal=1;
  int i;

  for(i=0;i<n;i++)
    cal*=a;

  return cal;
}

int main(void){
  puts("論理シフトと2のべき乗での乗除の一致を確認します。");
  
  unsigned no=scan_uint();
  int shift,lr;
  
  printf("シフトする数（自然数で）を入力。");
  shift=scan_pint();
  
  do{
    puts("シフトする方向　左・・・1　右・・・0");
    printf("どっち？ :");  scanf("%d",&lr);
  }while(lr!=1 && lr!=0);
  
  if(lr==1){
    printf("(no<<shift) = %u\n",no<<shift);
    printf("no*2^shift = %u\n",no*pown(2,shift)); 
  }
  
  if(lr==0){
    printf("(no>>shift) = %u\n",no>>shift);
    printf("no/2^shift = %u\n",no/pown(2,shift));
  }
  
  return 0;
}
/*　演習7-3　*/
#include <stdio.h>

/*非負数の入力*/
unsigned scan_uint(void){
  unsigned no;
  do{  
    puts("非負数を入力してください。");
    printf("非整数(x) :");  scanf("%u",&no);
  }while(no<1);
  return no;
}

/*自然数入力*/
int scan_pint (void){
  int no;

  do{
    puts("自然数を入力してください。");

    printf("自然数 :");  scanf("%d",&no);

    if(no<=0)  puts("自然数ではありません。");
  }while(no<=0);

  return no;
}

/*入力した非負数の整数のビット数を返す*/
int count_bits(unsigned x){
  int bits=0;
  while(x){
    if(x&1U) bits++;
    x>>=1;
  }
  return bits;
}

/*非負数の整数のビット数の最大値を返す*/
int int_bits(void){
  return count_bits(~0U);
}

/*入力した非負数の全ビットを表示する*/
void print_bits(unsigned x){
  int i;
  for(i=int_bits()-1;i>=0;i--)
    putchar((x>>i)&1U ?'1':'0');
  putchar('\n');
}

/*符号なし整数のビットを右にnビット回転*/
unsigned rrotate(unsigned x,int n){
  int i=int_bits();
  return (x>>n) | (x<<(i-n));
}

/*符号なし整数のビットを左にnビット回転*/
unsigned lrotate(unsigned x,int n){
  int i=int_bits();
  return (x<<n) | (x>>(i-n));
}

int main(void){
  puts("入力した非負数のビットを回転させます。");
  int lr;   /*回転方向に使う*/
  int x=scan_uint();    /*非負数*/
  
  printf("回転ビット数を決めます。");
  int n=scan_pint();    /*回転ビット数*/
  
  puts("回転方向を決めます。");
  do{
    printf("左・・・１　右・・・０\nどっち？ :");  scanf("%d",&lr);
  }while(lr!=0 && lr!=1);
  
  if(lr==0){
    puts("元の数とそのビット");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    printf("&dビット回転後",n);
    printf("x=%u\nx>>",rrotate(x,n));
    print_bits(rrotate(x,n));
  }
  
  else{
    puts("元の数とそのビット");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    printf("%dビット回転後",n);
    printf("x=%u\nx>>",lrotate(x,n));
    print_bits(lrotate(x,n));
  }
  
  return 0;
}
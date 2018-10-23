/*　演習7-4　*/
#include <stdio.h>

/*自然数入力*/
int scan_pint (void){
  int no;

  do{
    puts("自然数を入力してください。");

    printf("自然数(n) :");  scanf("%d",&no);

    if(no<=0)  puts("自然数ではありません。");
  }while(no<=0);

  return no;
}

/*非負数の入力*/
unsigned scan_uint(void){
  unsigned no;
  do{  
    puts("非負数を入力してください。");
    printf("非整数 :");  scanf("%u",&no);
  }while(no<1);
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

/*符号なし整数の第nビットを１にする*/
unsigned set_1(unsigned x,int n){
  unsigned temp=1;
  temp<<=n-1;
  return x|temp;
}

/*符号なし整数の第nビットを０にする*/
unsigned reset_1(unsigned x,int n){
  unsigned temp=1;
  temp<<=n-1;
  return x&~temp;
}

/*符号なし整数の第nビットを反転*/
unsigned inverse_1(unsigned x,int n){
  unsigned temp=x>>(n-1);
  
  if(temp&1U)
    temp=reset_1(x,n);
  else
    temp=set_1(x,n);
  
  return temp;
}

/*本体*/
int main(void){
  unsigned x=scan_uint();
  int n=scan_pint();
  puts("入力した非整数の第nビットについて以下の3つの操作の１つを行います。");
  
  int p;
  do{
    printf("１・・1に変換\n２・・0に変換\n３・・反転\nどれ？ :");
    scanf("%d",&p);
  }while(p<1 || p>3);
  
  switch (p){
    case 1 :
      puts("元の数とそのビット");
      printf("x=%u\nx>>",x);
      print_bits(x);
    
      puts("操作後");
      printf("x=%u\nx>>",set_1(x,n));
      print_bits(set_1(x,n));
    
      break;
  
    case 2 :
      puts("元の数とそのビット");
      printf("x=%u\nx>>",x);
      print_bits(x);
    
      puts("操作後");
      printf("x=%u\nx>>",reset_1(x,n));
      print_bits(reset_1(x,n));
    
      break;
  
    case 3 :
      puts("元の数とそのビット");
      printf("x=%u\nx>>",x);
      print_bits(x);
    
      puts("操作後");
      printf("x=%u\nx>>",inverse_1(x,n));
      print_bits(inverse_1(x,n));
    
      break;
  }
  
  return 0;
}
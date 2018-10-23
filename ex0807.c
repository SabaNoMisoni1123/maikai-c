/*　演習8-7　*/
#include <stdio.h>

/*非負の整数数の入力*/
unsigned scan_uint(void){
  unsigned no;
  do{  
    printf("入力 :");
    scanf("%u",&no);
    
    if(no<0)
      printf("非負の整数を入力してください。");
  }while(no<0);
  return no;
}

/*非負の整数数の入力（最大値指定付き）*/
unsigned scan_M_uint(unsigned max){
  unsigned no;
  do{  
    printf("入力 :");
    scanf("%u",&no);
    
    if(no<0)
      puts("非負で入力してください。");
    else if(no>max)
      printf("%u以下で入力してください。\n");
      
  }while(no<0 || no>max);
  return no;
}


/*階乗*/
unsigned factoria(const unsigned n){
  if(n>0)
    return n*factoria(n-1);
  else
    return 1;
}

/*組み合わせ（階乗と併用タイプ）*/
unsigned combination_a(unsigned n,unsigned r){
  unsigned a=factoria(n);
  unsigned b=factoria(r);
  unsigned c=factoria(n-r);
  unsigned combi=a/b/c;
  
  return combi;
}

/*組み合わせ（再帰呼び出しタイプ）*/
unsigned combination_b(unsigned n,unsigned r){
  if(r==0 || n==r)
    return 1;
  else
    return (combination_b(n-1,r-1)+combination_b(n-1,r));
}

int main(void){
  puts("組み合わせを計算します。");
  
  printf("nを");
  unsigned n=scan_uint();
  
  printf("rを");
  unsigned r=scan_M_uint(n);
  
  printf("階乗と併用タイプ :%d\n",combination_a(n,r));
  printf("再帰呼び出しタイプ :%d\n",combination_b(n,r));
  
  return 0;
}


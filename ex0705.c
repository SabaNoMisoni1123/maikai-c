/*　演習7-5　*/
#include <stdio.h>

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

/*符号なし整数の第nビットを1にする*/
unsigned set_1(unsigned x,int n){
  unsigned temp=1;
  temp<<=n-1;
  return x|temp;
}

/*符号なし整数の第nビットを0にする*/
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

/*符号なし整数の第mビットから第m+n-1ビットまでの計nビットを全て1にする*/
unsigned set_n(unsigned x,int m,int n){
  unsigned fin=x;
  int i;
  for(i=m;i<m+n;i++)
    fin=set_1(fin,i);
  return fin;
}

/*符号なし整数の第mビットから第m+n-1ビットまでの計nビットを全て0にする*/
unsigned reset_n(unsigned x,int m,int n){
  unsigned fin=x;
  int i;
  for(i=m;i<m+n;i++)
    fin=reset_1(fin,i);
  return fin;
}

/*符号なし整数の第mビットから第m+n-1ビットまでの計nビットを全て反転する*/
unsigned inverse_n(unsigned x,int m,int n){
  unsigned fin=x;
  int i;
  for(i=m;i<m+n;i++)
    fin=inverse_1(fin,i);
  return fin;
}

/*本体*/
int main(void){
  unsigned x=scan_uint();   /*対象の非負数*/
  
  puts("第mビットからn個のビットを操作します。");
  printf("mについて");
  int m=scan_pint();    /*初めのビット*/
  printf("nについて");
  int n=scan_pint();    /*個数*/
  
  int choice;
  printf("第%dビットから%d個のビットを\n",m,n);
  printf("全て1にする・・・1\n全て0にする・・・2\n全て反転させる・・・3\n");
  do{
    printf("1,2,3のどれ？ :");  scanf("%d",&choice);
  }while(choice<1 || choice>3);
  
  switch(choice){
    
    case 1 :
    puts("元の数とそのビット");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    puts("操作後");
    printf("x=%u\nx>>",set_n(x,m,n));
    print_bits(set_n(x,m,n));
    
    break;
    
    
    case 2 :
    puts("元の数とそのビット");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    puts("操作後");
    printf("x=%u\nx>>",reset_n(x,m,n));
    print_bits(reset_n(x,m,n));
    
    break;
    
    
    case 3 :
    puts("元の数とそのビット");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    puts("操作後");
    printf("x=%u\nx>>",inverse_n(x,m,n));
    print_bits(inverse_n(x,m,n));
    
    break;
  }
  
  return 0;
}  

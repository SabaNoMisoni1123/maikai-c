/*　演習10-4　*/
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

/*n個の配列（１）入力（手続き）*/
void set_ary1(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i);  scanf("%d",&v[i]);
  }
}

/*配列の表示（１）毎回改行パターン*/
void put_ary1(int v[],int no){
  int i;

  for(i=0;i<no;i++)
    printf("%d\n",v[i]);

  putchar('\n');
}

void set_idx(int *v,int n){
  int i;
  for(i=0;i<n;i++){
    *(v+i)=i;
  }
}

int main(void){
  puts("配列の要素数を決定します。");
  int no=scan_pint();
  
  int v[no];
  puts("配列に数値を入力します。");
  set_ary1(v,no);
  
  puts("変換前の配列を確認。");
  put_ary1(v,no);
  
  puts("変換後の配列を確認。");
  int *u=v;
  set_idx(u,no);
  put_ary1(v,no);
  
  return 0;
}
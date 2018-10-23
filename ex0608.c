/*　演習6-8　*/

#include <stdio.h>
/*最小値発見*/

int min_of(int v[],int n){
  int min=v[0];
  int i;

  for(i=1;i<n;i++)
    if(min>v[i])
      min=v[i];

  return min;
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



/*n個の配列入力*/

void set_ary(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i+1);  scanf("%d",&v[i]);
  }
}



int main(void){
  puts("n個の整数を入力し、最も小さいものを挙げる。");

  int no=scan_pint();

  int v[no];

  set_ary(v,no);

  printf("最も小さいのは%dです。\n",min_of(v,no));

  return 0;
}
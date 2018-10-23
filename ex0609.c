/*　演習6-9　*/

#include <stdio.h>



/*n個の配列入力*/

void set_ary(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i+1);  scanf("%d",&v[i]);
  }
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


/*配列の逆転*/

void rev_intary(int v[],int no){
  int i;


  if(no%2==0)
    for(i=0;i<=no/2;i++){
      int temp=v[i];
      v[i]=v[(no-1)-i];
      v[(no-1)-i]=temp;
    }

  else
    for(i=0;i<=(no-1)/2;i++){
      int temp=v[i];
      v[i]=v[(no-1)-i];
      v[(no-1)-i]=temp;
    }
}


/*配列の表示（１）*/

void put_ary1(int v[],int no){
  int i;

  for(i=0;i<no;i++)
    printf("%d\n",v[i]);

  putchar('\n');
}


int main(void){
  puts("配列の要素の個数を決めます。");

  int no=scan_pint();

  int v[no];

  set_ary(v,no);

  rev_intary(v,no);

  put_ary1(v,no);

  return 0;
}


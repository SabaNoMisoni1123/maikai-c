/*　演習6-10　*/
#include <stdio.h>

void intary_rcpy(int v1[],const int v2[],int no){
    int i;
    for(i=0;i<no;i++)
        v1[i]=v2[(no-1)-i];
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

/*n個の配列（１）入力*/

void set_ary1(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i+1);  scanf("%d",&v[i]);
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
    int no=scan_pint();
    
    int v1[no];
    int v2[no];
    
    set_ary1(v2,no);
    
    intary_rcpy(v1,v2,no);
    
    puts("配列v2は以下の通り。");
    put_ary1(v2,no);
    
    puts("v2を反転したものを格納したv1は以下の通り。");
    put_ary1(v1,no);
    
    return 0;
}




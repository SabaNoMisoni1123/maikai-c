/*　演習6-11　*/
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

/*探索*/
int search_idx(const int v[],int idx[],int key,int n){
    int i;
    
    int count=0;
    
    for(i=0;i<n;i++)
        if(v[i]==key){
        idx[count]=i;
        count++;
        }       
    
    return count;
}

/*配列の表示（１）中かっこ使うパターン*/
void put_ary1(int v[],int no){
  int i;

  printf("{ ");

  for(i=0;i<no;i++)
    printf("%d ",v[i]);

  printf("}");

  putchar('\n');
}

/*n個の配列（１）入力*/
void set_ary1(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i);  scanf("%d",&v[i]);
  }
}

int main(void){
    printf("配列の要素数となる");
    int no=scan_pint();    /*配列の個数の決定*/
    
    int idx[no];    /*発見した添え字を記録*/
    int fin;    /*判定などに使う*/
    
    int v[no];    /*探索先*/
    set_ary1(v,no);
    
    int key;    /*探し物*/
    puts("配列の中から探したい整数を入力してください。");
    printf("整数 :");  scanf("%d",&key);
    
    fin=search_idx(v,idx,key,no);
    
    if(fin==0)
        puts("探索に失敗しました。");
    
    else{
        printf("%d個の%dを発見しました。\n",fin,key);
        
        puts("発見した時のv[]の添え字は以下の通りです。");
        
        put_ary1(idx,fin);
    }
    
    return 0;
}

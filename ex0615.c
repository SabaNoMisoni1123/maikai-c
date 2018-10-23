/*　演習6-15　*/

#include <stdio.h>

void put_count(void){
  static int count=0;
  
  printf("put_count:%d回目\n",++count);
}

/*自然数入力（改）*/
int scan_pint (void){
  int no;

  do{
    puts("put_countを実行する回数を入力してください。");

    printf("回数 :");  scanf("%d",&no);

    if(no<=0)  puts("自然数でお願いします。");
  }while(no<=0);

  return no;
}

int main(void){
  int no=scan_pint();
  int i;
  
  for(i=0;i<no;i++)
    put_count();
  
  return 0;
}

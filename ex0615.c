/*�@���K6-15�@*/

#include <stdio.h>

void put_count(void){
  static int count=0;
  
  printf("put_count:%d���\n",++count);
}

/*���R�����́i���j*/
int scan_pint (void){
  int no;

  do{
    puts("put_count�����s����񐔂���͂��Ă��������B");

    printf("�� :");  scanf("%d",&no);

    if(no<=0)  puts("���R���ł��肢���܂��B");
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

/*�@���K6-8�@*/

#include <stdio.h>
/*�ŏ��l����*/

int min_of(int v[],int n){
  int min=v[0];
  int i;

  for(i=1;i<n;i++)
    if(min>v[i])
      min=v[i];

  return min;
}

/*���R������*/

int scan_pint (void){
  int no;

  do{
    puts("���R������͂��Ă��������B");

    printf("���R�� :");  scanf("%d",&no);

    if(no<=0)  puts("���R���ł͂���܂���B");
  }while(no<=0);

  return no;
}



/*n�̔z�����*/

void set_ary(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i+1);  scanf("%d",&v[i]);
  }
}



int main(void){
  puts("n�̐�������͂��A�ł����������̂�������B");

  int no=scan_pint();

  int v[no];

  set_ary(v,no);

  printf("�ł��������̂�%d�ł��B\n",min_of(v,no));

  return 0;
}
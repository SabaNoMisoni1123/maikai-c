/*�@���K10-4�@*/
#include <stdio.h>

/*���R������*/
int scan_pint (void){
  int no;

  do{
    printf("���� :");
    scanf("%d",&no);

    if(no<=0)  puts("���R���œ��͂��Ă��������B");
  }while(no<=0);

  return no;
}

/*n�̔z��i�P�j���́i�葱���j*/
void set_ary1(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i);  scanf("%d",&v[i]);
  }
}

/*�z��̕\���i�P�j������s�p�^�[��*/
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
  puts("�z��̗v�f�������肵�܂��B");
  int no=scan_pint();
  
  int v[no];
  puts("�z��ɐ��l����͂��܂��B");
  set_ary1(v,no);
  
  puts("�ϊ��O�̔z����m�F�B");
  put_ary1(v,no);
  
  puts("�ϊ���̔z����m�F�B");
  int *u=v;
  set_idx(u,no);
  put_ary1(v,no);
  
  return 0;
}
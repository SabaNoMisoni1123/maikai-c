/*�@���K7-2�@*/
#include <stdio.h>
#include <math.h>

/*�񕉐��̓���*/
unsigned scan_uint(void){
  unsigned no;
  do{  
    puts("�񕉐�����͂��Ă��������B");
    printf("�񐮐��ino�j :");  scanf("%u",&no);
  }while(no<1);
  return no;
}

/*���R������*/
int scan_pint (void){
  int no;

  do{
    puts("���R������͂��Ă��������B");

    printf("���R���ishift�j :");  scanf("%d",&no);

    if(no<=0)  puts("���R���ł͂���܂���B");
  }while(no<=0);

  return no;
}

/*n��i�����j*/
int pown (const int a,int n){
  int cal=1;
  int i;

  for(i=0;i<n;i++)
    cal*=a;

  return cal;
}

int main(void){
  puts("�_���V�t�g��2�ׂ̂���ł̏揜�̈�v���m�F���܂��B");
  
  unsigned no=scan_uint();
  int shift,lr;
  
  printf("�V�t�g���鐔�i���R���Łj����́B");
  shift=scan_pint();
  
  do{
    puts("�V�t�g��������@���E�E�E1�@�E�E�E�E0");
    printf("�ǂ����H :");  scanf("%d",&lr);
  }while(lr!=1 && lr!=0);
  
  if(lr==1){
    printf("(no<<shift) = %u\n",no<<shift);
    printf("no*2^shift = %u\n",no*pown(2,shift)); 
  }
  
  if(lr==0){
    printf("(no>>shift) = %u\n",no>>shift);
    printf("no/2^shift = %u\n",no/pown(2,shift));
  }
  
  return 0;
}
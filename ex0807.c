/*�@���K8-7�@*/
#include <stdio.h>

/*�񕉂̐������̓���*/
unsigned scan_uint(void){
  unsigned no;
  do{  
    printf("���� :");
    scanf("%u",&no);
    
    if(no<0)
      printf("�񕉂̐�������͂��Ă��������B");
  }while(no<0);
  return no;
}

/*�񕉂̐������̓��́i�ő�l�w��t���j*/
unsigned scan_M_uint(unsigned max){
  unsigned no;
  do{  
    printf("���� :");
    scanf("%u",&no);
    
    if(no<0)
      puts("�񕉂œ��͂��Ă��������B");
    else if(no>max)
      printf("%u�ȉ��œ��͂��Ă��������B\n");
      
  }while(no<0 || no>max);
  return no;
}


/*�K��*/
unsigned factoria(const unsigned n){
  if(n>0)
    return n*factoria(n-1);
  else
    return 1;
}

/*�g�ݍ��킹�i�K��ƕ��p�^�C�v�j*/
unsigned combination_a(unsigned n,unsigned r){
  unsigned a=factoria(n);
  unsigned b=factoria(r);
  unsigned c=factoria(n-r);
  unsigned combi=a/b/c;
  
  return combi;
}

/*�g�ݍ��킹�i�ċA�Ăяo���^�C�v�j*/
unsigned combination_b(unsigned n,unsigned r){
  if(r==0 || n==r)
    return 1;
  else
    return (combination_b(n-1,r-1)+combination_b(n-1,r));
}

int main(void){
  puts("�g�ݍ��킹���v�Z���܂��B");
  
  printf("n��");
  unsigned n=scan_uint();
  
  printf("r��");
  unsigned r=scan_M_uint(n);
  
  printf("�K��ƕ��p�^�C�v :%d\n",combination_a(n,r));
  printf("�ċA�Ăяo���^�C�v :%d\n",combination_b(n,r));
  
  return 0;
}


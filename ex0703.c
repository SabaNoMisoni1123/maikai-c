/*�@���K7-3�@*/
#include <stdio.h>

/*�񕉐��̓���*/
unsigned scan_uint(void){
  unsigned no;
  do{  
    puts("�񕉐�����͂��Ă��������B");
    printf("�񐮐�(x) :");  scanf("%u",&no);
  }while(no<1);
  return no;
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

/*���͂����񕉐��̐����̃r�b�g����Ԃ�*/
int count_bits(unsigned x){
  int bits=0;
  while(x){
    if(x&1U) bits++;
    x>>=1;
  }
  return bits;
}

/*�񕉐��̐����̃r�b�g���̍ő�l��Ԃ�*/
int int_bits(void){
  return count_bits(~0U);
}

/*���͂����񕉐��̑S�r�b�g��\������*/
void print_bits(unsigned x){
  int i;
  for(i=int_bits()-1;i>=0;i--)
    putchar((x>>i)&1U ?'1':'0');
  putchar('\n');
}

/*�����Ȃ������̃r�b�g���E��n�r�b�g��]*/
unsigned rrotate(unsigned x,int n){
  int i=int_bits();
  return (x>>n) | (x<<(i-n));
}

/*�����Ȃ������̃r�b�g������n�r�b�g��]*/
unsigned lrotate(unsigned x,int n){
  int i=int_bits();
  return (x<<n) | (x>>(i-n));
}

int main(void){
  puts("���͂����񕉐��̃r�b�g����]�����܂��B");
  int lr;   /*��]�����Ɏg��*/
  int x=scan_uint();    /*�񕉐�*/
  
  printf("��]�r�b�g�������߂܂��B");
  int n=scan_pint();    /*��]�r�b�g��*/
  
  puts("��]���������߂܂��B");
  do{
    printf("���E�E�E�P�@�E�E�E�E�O\n�ǂ����H :");  scanf("%d",&lr);
  }while(lr!=0 && lr!=1);
  
  if(lr==0){
    puts("���̐��Ƃ��̃r�b�g");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    printf("&d�r�b�g��]��",n);
    printf("x=%u\nx>>",rrotate(x,n));
    print_bits(rrotate(x,n));
  }
  
  else{
    puts("���̐��Ƃ��̃r�b�g");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    printf("%d�r�b�g��]��",n);
    printf("x=%u\nx>>",lrotate(x,n));
    print_bits(lrotate(x,n));
  }
  
  return 0;
}
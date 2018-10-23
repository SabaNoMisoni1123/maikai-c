/*�@���K7-4�@*/
#include <stdio.h>

/*���R������*/
int scan_pint (void){
  int no;

  do{
    puts("���R������͂��Ă��������B");

    printf("���R��(n) :");  scanf("%d",&no);

    if(no<=0)  puts("���R���ł͂���܂���B");
  }while(no<=0);

  return no;
}

/*�񕉐��̓���*/
unsigned scan_uint(void){
  unsigned no;
  do{  
    puts("�񕉐�����͂��Ă��������B");
    printf("�񐮐� :");  scanf("%u",&no);
  }while(no<1);
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

/*�����Ȃ������̑�n�r�b�g���P�ɂ���*/
unsigned set_1(unsigned x,int n){
  unsigned temp=1;
  temp<<=n-1;
  return x|temp;
}

/*�����Ȃ������̑�n�r�b�g���O�ɂ���*/
unsigned reset_1(unsigned x,int n){
  unsigned temp=1;
  temp<<=n-1;
  return x&~temp;
}

/*�����Ȃ������̑�n�r�b�g�𔽓]*/
unsigned inverse_1(unsigned x,int n){
  unsigned temp=x>>(n-1);
  
  if(temp&1U)
    temp=reset_1(x,n);
  else
    temp=set_1(x,n);
  
  return temp;
}

/*�{��*/
int main(void){
  unsigned x=scan_uint();
  int n=scan_pint();
  puts("���͂����񐮐��̑�n�r�b�g�ɂ��Ĉȉ���3�̑���̂P���s���܂��B");
  
  int p;
  do{
    printf("�P�E�E1�ɕϊ�\n�Q�E�E0�ɕϊ�\n�R�E�E���]\n�ǂ�H :");
    scanf("%d",&p);
  }while(p<1 || p>3);
  
  switch (p){
    case 1 :
      puts("���̐��Ƃ��̃r�b�g");
      printf("x=%u\nx>>",x);
      print_bits(x);
    
      puts("�����");
      printf("x=%u\nx>>",set_1(x,n));
      print_bits(set_1(x,n));
    
      break;
  
    case 2 :
      puts("���̐��Ƃ��̃r�b�g");
      printf("x=%u\nx>>",x);
      print_bits(x);
    
      puts("�����");
      printf("x=%u\nx>>",reset_1(x,n));
      print_bits(reset_1(x,n));
    
      break;
  
    case 3 :
      puts("���̐��Ƃ��̃r�b�g");
      printf("x=%u\nx>>",x);
      print_bits(x);
    
      puts("�����");
      printf("x=%u\nx>>",inverse_1(x,n));
      print_bits(inverse_1(x,n));
    
      break;
  }
  
  return 0;
}
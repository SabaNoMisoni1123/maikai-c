/*�@���K7-5�@*/
#include <stdio.h>

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

/*�����Ȃ������̑�n�r�b�g��1�ɂ���*/
unsigned set_1(unsigned x,int n){
  unsigned temp=1;
  temp<<=n-1;
  return x|temp;
}

/*�����Ȃ������̑�n�r�b�g��0�ɂ���*/
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

/*�����Ȃ������̑�m�r�b�g�����m+n-1�r�b�g�܂ł̌vn�r�b�g��S��1�ɂ���*/
unsigned set_n(unsigned x,int m,int n){
  unsigned fin=x;
  int i;
  for(i=m;i<m+n;i++)
    fin=set_1(fin,i);
  return fin;
}

/*�����Ȃ������̑�m�r�b�g�����m+n-1�r�b�g�܂ł̌vn�r�b�g��S��0�ɂ���*/
unsigned reset_n(unsigned x,int m,int n){
  unsigned fin=x;
  int i;
  for(i=m;i<m+n;i++)
    fin=reset_1(fin,i);
  return fin;
}

/*�����Ȃ������̑�m�r�b�g�����m+n-1�r�b�g�܂ł̌vn�r�b�g��S�Ĕ��]����*/
unsigned inverse_n(unsigned x,int m,int n){
  unsigned fin=x;
  int i;
  for(i=m;i<m+n;i++)
    fin=inverse_1(fin,i);
  return fin;
}

/*�{��*/
int main(void){
  unsigned x=scan_uint();   /*�Ώۂ̔񕉐�*/
  
  puts("��m�r�b�g����n�̃r�b�g�𑀍삵�܂��B");
  printf("m�ɂ���");
  int m=scan_pint();    /*���߂̃r�b�g*/
  printf("n�ɂ���");
  int n=scan_pint();    /*��*/
  
  int choice;
  printf("��%d�r�b�g����%d�̃r�b�g��\n",m,n);
  printf("�S��1�ɂ���E�E�E1\n�S��0�ɂ���E�E�E2\n�S�Ĕ��]������E�E�E3\n");
  do{
    printf("1,2,3�̂ǂ�H :");  scanf("%d",&choice);
  }while(choice<1 || choice>3);
  
  switch(choice){
    
    case 1 :
    puts("���̐��Ƃ��̃r�b�g");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    puts("�����");
    printf("x=%u\nx>>",set_n(x,m,n));
    print_bits(set_n(x,m,n));
    
    break;
    
    
    case 2 :
    puts("���̐��Ƃ��̃r�b�g");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    puts("�����");
    printf("x=%u\nx>>",reset_n(x,m,n));
    print_bits(reset_n(x,m,n));
    
    break;
    
    
    case 3 :
    puts("���̐��Ƃ��̃r�b�g");
    printf("x=%u\nx>>",x);
    print_bits(x);
    
    puts("�����");
    printf("x=%u\nx>>",inverse_n(x,m,n));
    print_bits(inverse_n(x,m,n));
    
    break;
  }
  
  return 0;
}  

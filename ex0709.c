/*�@���K7-9�@*/
#include <stdio.h>
#include <math.h>

/*�񕉂̎����̓���*/
double scan_pdouble(void){
  double no;
  do{
    printf("���� :");
    scanf("%lf",&no);
    
    if(no<0)
      puts("�񕉂̎����œ��͂��Ă��������B");
  }while(no<0);
  
  return no;
}


int main(void){  
  puts("�ʐς���͂��Ă��������B���̖ʐς̐����`�̈�ӂ̒�����\\�����܂��B");
  double x=scan_pdouble();
  
  printf("�ʐς�%f�̐����`�̈�ӂ̒�����%f�ł��B\n",x,sqrt(x));
  
  return 0;
}
  
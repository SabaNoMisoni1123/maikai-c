/*�@���K9-8�@*/
#include <stdio.h>
void put_stringr(const char s[]){
  int count=0;
  
  while(s[count]){
    count++;
  }   /*count�͂����ł͕������{�P�̒l�ɂȂ��Ă�*/
  
  count--;    /*�{���̕������̓Y�����ɍ��킹��*/
  while(count>=0)
    putchar(s[count--]);
  
}

int main(void){
  char s[128];
  puts("������i�p��j����͂��Ă��������B");
  printf("���� :");
  scanf("%s",s);
  puts("���͂���������𔽓]���ĕ\\������ƈȉ��̒ʂ�");
  
  put_stringr(s);
  
  return 0;
}
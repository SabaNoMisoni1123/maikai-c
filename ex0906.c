/*�@���K9-6�@*/
#include <stdio.h>
int str_chum(const char s[],const int c){
  int count=0;
  int i;
  for(i=0;s[i];i++){
    if(s[i]==c){
      count++;
    }
  }
  return count;
}

int main(void) {
  char s[128];
  char c;
  puts("������̓���");
  printf("���� :");
  scanf("%s",s);

  puts("�T�������̓���");
  printf("���� :");
  scanf(" %c",&c);

  printf("�����񒆂�%c�̐���%d��",c,str_chum(s,c));
  return 0;
}

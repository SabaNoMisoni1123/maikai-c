/*�@���K9-3�@*/
#include <stdio.h>

void null_string(char s[]){
  int i=0;
  
  while(s[i])
    s[i]='\0';
  
}

int main(void){
  char s[128];
  
  printf("���� :");
  scanf("%s",s);
  
  puts("���͂���������");
  
  printf("%s\n",s);
  
  puts("�ϊ���");
  
  null_string(s);
  printf("%s\n",s);
  
  return 0;
}

/*�@���K9-10�@*/
#include <stdio.h>
/*������̓��́i�葱���j*/
void scan_str(char s[]){
  printf("���� :");
  scanf("%s",s);
  putchar('\n');
}

void del_digit(char s[]){
  int i=0;
  int j=0;
  while(s[i]){
    if(s[i]<'0' || s[i]>'9')
      s[j++]=s[i];
    i++;
  }
  s[j]='\0';
}

int main(void){
  char s[128];
  puts("��������p�����œ���");
  scan_str(s);
  
  puts("���̕�����");
  printf("%s\n",s);
  
  del_digit(s);
  puts("�������폜����������");
  printf("%s\n",s);
  
  return 0;
}

/*�@���K11-5�@*/
#include <stdio.h>
int str_chnum(const char *s,int c){
  int count=0;
  while(*s){
    if(*s++==c){
      count++;
    }
  }
  return count;
}

/*������̓��́i�葱���j*/
void scan_str(char s[]){
  printf("���� :");
  scanf("%s",s);
  putchar('\n');
}


int main(void){
  char s[128];
  char c;

  puts("�p�����ŕ��������");
  scan_str(s);

  puts("�T�����������");
  printf("���� :");
  scanf(" %c",&c);

  printf("%c�����ꂽ�񐔂�%d��\n",c,str_chnum(s,c));

  return 0;
}

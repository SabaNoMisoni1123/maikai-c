/*�@���K11-3�@*/
#include <stdio.h>
char *str_copy(char *d,const char *s){
  char *t = d;
  while(*d++=*s++);

  return t;
}

/*������̓��́i�葱���j*/
void scan_str(char s[]){
  printf("���� :");
  scanf("%s",s);
  putchar('\n');
}


int main(void) {
  char str[128]="abc";
  char temp[128];
  puts("�R�s�[���镶��������");
  scan_str(temp);

  puts("�R�s�[�O�̕�����̊m�F");
  printf("%s\n",str);

  puts("�R�s�[��̕�������m�F");
  printf("%s\n",str_copy(str,temp));

  return 0;
}

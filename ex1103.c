/*　演習11-3　*/
#include <stdio.h>
char *str_copy(char *d,const char *s){
  char *t = d;
  while(*d++=*s++);

  return t;
}

/*文字列の入力（手続き）*/
void scan_str(char s[]){
  printf("入力 :");
  scanf("%s",s);
  putchar('\n');
}


int main(void) {
  char str[128]="abc";
  char temp[128];
  puts("コピーする文字列を入力");
  scan_str(temp);

  puts("コピー前の文字列の確認");
  printf("%s\n",str);

  puts("コピー後の文字列を確認");
  printf("%s\n",str_copy(str,temp));

  return 0;
}

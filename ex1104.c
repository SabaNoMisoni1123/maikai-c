/*　演習11-4　*/
#include <stdio.h>
/*文字列の入力（手続き）*/
void scan_str(char s[]){
  printf("入力 :");
  scanf("%s",s);
  putchar('\n');
}

void put_strings(char *s){
  while(*s)
    putchar(*s++);
  putchar('\n');
}

int main(void){
  char s[128];
  
  puts("文字列の入力（英数字で）");
  scan_str(s);
  
  put_strings(s);
  
  return 0;
}
  
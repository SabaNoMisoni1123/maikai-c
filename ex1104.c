/*�@���K11-4�@*/
#include <stdio.h>
/*������̓��́i�葱���j*/
void scan_str(char s[]){
  printf("���� :");
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
  
  puts("������̓��́i�p�����Łj");
  scan_str(s);
  
  put_strings(s);
  
  return 0;
}
  
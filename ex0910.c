/*　演習9-10　*/
#include <stdio.h>
/*文字列の入力（手続き）*/
void scan_str(char s[]){
  printf("入力 :");
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
  puts("文字列を英数字で入力");
  scan_str(s);
  
  puts("元の文字列");
  printf("%s\n",s);
  
  del_digit(s);
  puts("数字を削除した文字列");
  printf("%s\n",s);
  
  return 0;
}

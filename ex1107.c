/*　演習11-7　*/
#include <stdio.h>
#include <ctype.h>

/*文字列の入力（手続き）*/
void scan_str(char s[]){
  printf("入力 :");
  scanf("%s",s);
  putchar('\n');
}

void str_toupper(char *s){
  while(*s=toupper(*s)){
    *s++;
  }
}

void str_tolower(char *s){
  while(*s=tolower(*s)){
    *s++;
  }
}

int main(){
  int choice;
  char s[128];
  scan_str(s);
  
  puts("1...すべて大文字  0...すべて小文字");
  do{
    printf("入力 :");
    scanf("%d",&choice);
  }while(choice!=0 && choice!=1);
  putchar('\n');
  
  switch(choice){
    case 0 : str_tolower(s);  break;
    case 1 : str_toupper(s);  break;
  }
  
  printf("%s\n",s);
  
  return 0;
}


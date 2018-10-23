/*　演習11-8　*/
#include <stdio.h>

/*文字列の入力（手続き）*/
void scan_str(char s[]){
  printf("入力 :");
  scanf("%s",s);
  putchar('\n');
}

void del_digit(char *s){
  int count=0;
  do{
    if(*s>='0' && *s<='9'){
      count++;
    }
    else if(count>0){
      *(s-count)=*s;
    }
  }while(*s++);
}

int main(){
  char s[128];
  scan_str(s);
  
  puts("入力した文字列から数字のみ削除します。");
  del_digit(s);
  printf("%s\n",s);
  
  return 0;
}
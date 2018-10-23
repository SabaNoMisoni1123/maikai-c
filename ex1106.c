/*　演習11-6　*/
#include <stdio.h>
/*文字列の入力（手続き）*/
void scan_str(char s[]){
  printf("入力 :");
  scanf("%s",s);
  putchar('\n');
}

char *str_chr(const char *s, int c){
  char *ans;
  ans=NULL;
  do{
    if(*s==c){
      ans=(char *)s;
      break;
    }
  }while(*s++);
  
  return ans;
}


int main(void){
  char s[128];
  char c;
  char *find;
  puts("文字列を入力（英数字で）");
  scan_str(s);
  
  puts("探す文字を入力（1文字）");
  printf("入力 :");
  scanf(" %c",&c);
  
  find=str_chr(s,c);
  
  if(find==NULL)
    puts("探した文字はありませんでした。");
  else
    printf("探した文字%cは\"%p\"にあります。\n",*find,find);
  
  return 0;
}
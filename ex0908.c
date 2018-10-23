/*　演習9-8　*/
#include <stdio.h>
void put_stringr(const char s[]){
  int count=0;
  
  while(s[count]){
    count++;
  }   /*countはここでは文字数＋１の値になってる*/
  
  count--;    /*本来の文字数の添え字に合わせる*/
  while(count>=0)
    putchar(s[count--]);
  
}

int main(void){
  char s[128];
  puts("文字列（英語）を入力してください。");
  printf("入力 :");
  scanf("%s",s);
  puts("入力した文字列を反転して表\示すると以下の通り");
  
  put_stringr(s);
  
  return 0;
}
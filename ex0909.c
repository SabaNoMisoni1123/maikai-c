/*　演習9-9　*/
#include <stdio.h>
void rev_string(char s[]){
  int count=0;
  int i;
  while(s[count])   /*文字数カウント*/
    count++;
  
  for(i=0;i<(count/2);i++){
    char temp=s[i];
    s[i]=s[(count-1)-i];
    s[(count-1)-i]=temp;
  }
}

/*文字列（文字定数の配列）出力（ナル文字まで）*/
void put_string(const char s[]){
  int i=0;
  while(s[i])
    putchar(s[i++]);
}

/*文字列の入力（手続き）*/
void scan_str(char s[]){
  printf("入力 :");
  scanf("%s",s);
  putchar('\n');
}

int main(void){
  puts("入力した文字列の配列を文字のみ逆順にする。");
  
  char s[128];
  scan_str(s);
  
  rev_string(s);
  
  put_string(s);
  
  return 0;
}
  
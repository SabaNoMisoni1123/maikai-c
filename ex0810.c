/*　演習8-10　*/
#include <stdio.h>


int main(void){
  int ch;   /*文字*/
  int cnt[10]={0};    /*カウンタ*/
  int i;
  
  puts("数字を入力してください。");
  
  while((ch=getchar())!=EOF){
    if(ch>='0' && ch<='9')
      cnt[ch-'0']++;
  }
  
  puts("数字の内訳");
  
  for(i=0;i<10;i++){
    printf("%d :",i);
    for(;cnt[i]>0;cnt[i]--)
      putchar('*');
    putchar('\n');
  }
  
  return 0;
}

/*　演習9-12　*/
#include <stdio.h>
#include <string.h>
#define NOMBER 100

void rev_strings(char s[][128],int n){
  int h;
  for(h=0;h<n;h++){
    int count=0;
    int i;
    while(s[h][count])   /*文字数カウント*/
      count++;
  
    for(i=0;i<(count/2);i++){
      char temp=s[h][i];
      s[h][i]=s[h][(count-1)-i];
      s[h][(count-1)-i]=temp;
    }
  }
}


void put_strary(const char s[][/*配列当たりの文字数*/128],int n){
  int i,j;
  for(i=0;i<n;i++)
    printf("s[%d] = \" %s \"\n",i,s[i]);
}

int main(void){
  char s[NOMBER][128];
  int count=0;
  int i;
  
  puts("いくつか文字列を入力してください。");
  for(i=0;i<NOMBER;i++){
    printf("入力 :");
    scanf("%s",s[i]);
    
    if(stricmp(s[i],"$$$$$")==0)
      break;
    
    count++;
  }
  
  puts("元の文字列の確認");
  put_strary(s,count);
  
  rev_strings(s,count);
  puts("反転後の文字列の確認");
  put_strary(s,count);
  
  return 0;
}
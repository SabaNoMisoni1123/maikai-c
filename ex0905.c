/*�@���K9-5�@*/
#include <stdio.h>

int str_char(const char s[],int c){
  int i;
  for(i=0;s[i]!=0;i++){
    if(s[i]==c)
      return i;
  }
  return -1;
}

int main(void){
  char s[128];
  char c;
  int no;
  
  printf("���� :");
  scanf(" %c",&c);
  
  printf("���� :");
  scanf("%s",s);
  
  no=str_char(s,c);
  
  if(no==-1)
    printf("%c �͖����B\n",c);
  else
    printf("%c �̓Y������%d\n",c,no);
  
  return 0;
}
  

/*@‰‰K9-5@*/
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
  
  printf("“ü—Í :");
  scanf(" %c",&c);
  
  printf("“ü—Í :");
  scanf("%s",s);
  
  no=str_char(s,c);
  
  if(no==-1)
    printf("%c ‚Í–³‚µB\n",c);
  else
    printf("%c ‚Ì“Y‚¦š‚Í%d\n",c,no);
  
  return 0;
}
  

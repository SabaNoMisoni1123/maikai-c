/*@‰‰K9-3@*/
#include <stdio.h>
#include <string.h>
#define NOMBER 40    /*İ–â‚Ì‘å‚«‚È”*/
int main(void){
  int i;
  char s[NOMBER][128];
  
  for(i=0;i<NOMBER;i++){
    printf("s[%d] :",i);
    scanf("%s",s[i]);
    
    if(strcmp(s[i],"$$$$$")==0)
      break;
  }
  
  for(i=0;i<NOMBER;i++){
    if(strcmp(s[i],"$$$$$")==0)
      break;
    printf("\"%s\"\n",s[i]);
  }
  
  return 0;
}
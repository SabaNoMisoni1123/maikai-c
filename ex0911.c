/*@‰‰K9-11@*/
#include <stdio.h>
#include <string.h>

#define NOMBER1 10
#define NOMBER2 128

void put_strary(const char s[][NOMBER2],int n){
  int i;
  for(i=0;i<n;i++)
    printf("s[%d] = \" %s \"\n",i,s[i]);
}

int main(void){
  char s[NOMBER1][NOMBER2];
  int i;
  int count=0;
  
  for(i=0;i<NOMBER1;i++){
    printf("“ü—Í :");
    scanf("%s",s[i]);
    
    if(stricmp(s[i],"$$$$$")==0)
      break;
    
    count++;
  }
  
  put_strary(s,count);
  
  return 0;
}
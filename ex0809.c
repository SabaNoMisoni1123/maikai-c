/*�@���K8-9�@*/
#include <stdio.h>

int main(void){
  int ch;
  int count=1;
  while((ch=getchar())!=EOF){
    if(ch=='\n')
      count++;
  }
  
  printf("�s����%d�ł��B",count);
  
  return 0;
}
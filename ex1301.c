/*�@���K13-1�@*/
#include <stdio.h>

int main(){
  FILE *fp;
  char s[32];
  
  printf("�T���t�@�C��������� :");
  scanf("%s",s);
  
  fp=fopen(s,"r");
  
  if(fp==NULL)
    printf("\a���̃t�@�C���͑��݂��܂���B\n");
  else{
    printf("\a���̃t�@�C���͑��݂��܂��B\n");
    fclose(fp);
  }
  
  return 0;
}
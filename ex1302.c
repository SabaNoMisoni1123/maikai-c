/*�@���K13-2�@*/
#include <stdio.h>

int main(){
  FILE *fp;
  char s[32];
  
  printf("��������t�@�C��������� :");
  scanf("%s",s);
  
  fp=fopen(s,"w");
  
  if(fp==NULL)
    printf("\a���̃t�@�C���͑��݂��܂���B\n");
  else{
    printf("\a���̃t�@�C���̒��g���������܂����B\n");
    fclose(fp);
  }
  
  return 0;
}
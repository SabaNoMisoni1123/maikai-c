/*�@���K13-13�@*/
#include <stdio.h>


int main(){
  char ch[128];
  FILE *sfp, *dfp;
  char sname[FILENAME_MAX], dname[FILENAME_MAX];
  
  printf("�R�s�[���̃t�@�C���� :");   scanf("%s",sname);
  printf("�R�s�[��̃t�@�C���� :");   scanf("%s",dname);
  
  if((sfp=fopen(sname,"r"))==NULL)
    printf("\a�R�s�[���̃t�@�C�����J�����Ƃ��ł��܂���ł����B\n");
  else{
    if((dfp=fopen(dname,"wb"))==NULL)
      printf("\a�R�s�[��̃t�@�C�����J�����Ƃ��ł��܂��񂵂��B\n");
    else{
      printf("�R�s�[���܂����B\n");
      while(fread(ch,1,128,sfp)>0){
        fwrite(ch,1,128,dfp);
      }
    
      fclose(dfp);
    }
    
    fclose(sfp);
  }
  
  puts("�R�s�[�̊m�F");
  fopen(dname,"rb");
  while(fread(ch,1,128,sfp)>0){
        printf("%s",ch);
      }
  
  return 0;
}
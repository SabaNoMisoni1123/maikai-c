/*�@���K13-8�@*/
#include <stdio.h>

int main(){
  int ch;
  FILE *sfp, *dfp;
  char sname[FILENAME_MAX], dname[FILENAME_MAX];
  
  printf("�R�s�[���̃t�@�C���� :");   scanf("%s",sname);
  printf("�R�s�[��̃t�@�C���� :");   scanf("%s",dname);
  
  if((sfp=fopen(sname,"r"))==NULL)
    printf("\a�R�s�[���̃t�@�C�����J�����Ƃ��ł��܂���ł����B\n");
  else{
    if((dfp=fopen(dname,"w"))==NULL)
      printf("\a�R�s�[��̃t�@�C�����J�����Ƃ��ł��܂��񂵂��B\n");
    else{
      printf("�ȉ��̓��e��%s����%s�փR�s�[���܂����B\n",sname,dname);
      puts("----��������----");
      while((ch=fgetc(sfp))!=EOF){
        fputc(ch,dfp);
        putchar(ch);
      }
      putchar('\n');
      puts("----�����܂�----");
    
      fclose(dfp);
    }
    
    fclose(sfp);
  }
  
  return 0;
}
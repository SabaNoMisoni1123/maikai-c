/*�@���K13-8�@*/
#include <stdio.h>
#include <ctype.h>

int main(){
  int ch,select;
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
      puts("�S�Ă�啶���ɕϊ����ăR�s�[...1  �S�Ă��������ɂ��ăR�s�[...0");
      do{
        printf("���� :");   scanf("%d",&select);
      }while(select!=1 && select!=0);
      
      switch(select){
        case 0 :{
          puts("�ȉ��̕��͂��R�s�[���܂����B");
          while((ch=fgetc(sfp))!=EOF){
            putchar(tolower(ch));
            fputc(tolower(ch),dfp);
          }
          break;
        }
        case 1 :{
          puts("�ȉ��̕��͂��R�s�[���܂����B");
          while((ch=fgetc(sfp))!=EOF){
            putchar(toupper(ch));
            fputc(toupper(ch),dfp);
          }
          break;
        }
      }
      fclose(dfp);
    }
    fclose(sfp);
  }
  
  return 0;
}
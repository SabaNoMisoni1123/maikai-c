/*�@���K13-6�@*/
#include <stdio.h>
int main(){
  int count=0;
  char filename[FILENAME_MAX];
  FILE *fp;
  int ch;
  
  puts("�ǂݍ��ރt�@�C����������");
  printf("���� :");   scanf("%s",filename);
  
  if((fp=fopen(filename,"r"))==NULL)
    printf("\a�t�@�C�����J�����Ƃ��ł��܂���B\n");
  else{
    while((ch=fgetc(fp))!=EOF)
      if(ch=='\n')
        count++;
  }
  
  printf("�t�@�C�����̉��s������%d�ł����B\n",count);
  
  return 0;
  
}
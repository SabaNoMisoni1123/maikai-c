/*�@���K13-7�@*/
#include <stdio.h>
int main(){
  char filename[FILENAME_MAX];
  FILE *fp;
  int ch,i;
  int count[10]={0};
  
  puts("�ǂݍ��ރt�@�C����������");
  printf("���� :");   scanf("%s",filename);
  
  if((fp=fopen(filename,"r"))==NULL)
    printf("\a�t�@�C�����J�����Ƃ��ł��܂���B\n");
  else{
    while((ch=fgetc(fp))!=EOF){
      switch(ch){
        case '0' : count[0]++; break;
        case '1' : count[1]++; break;
        case '2' : count[2]++; break;
        case '3' : count[3]++; break;
        case '4' : count[4]++; break;
        case '5' : count[5]++; break;
        case '6' : count[6]++; break;
        case '7' : count[7]++; break;
        case '8' : count[8]++; break;
        case '9' : count[9]++; break;
      }
    }
    
    puts("�ǂݍ��񂾃t�@�C���̒��̐��������̓���́A");
    for(i=0;i<10;i++){
      printf("%d��%d��\n",i,count[i]);
    }
    puts("�ł����B");
  }
  return 0;
  
}
/*　演習13-6　*/
#include <stdio.h>
int main(){
  int count=0;
  char filename[FILENAME_MAX];
  FILE *fp;
  int ch;
  
  puts("読み込むファイル名を決定");
  printf("入力 :");   scanf("%s",filename);
  
  if((fp=fopen(filename,"r"))==NULL)
    printf("\aファイルを開くことができません。\n");
  else{
    while((ch=fgetc(fp))!=EOF)
      if(ch=='\n')
        count++;
  }
  
  printf("ファイル中の改行文字は%d個でした。\n",count);
  
  return 0;
  
}
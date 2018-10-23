/*　演習13-8　*/
#include <stdio.h>

int main(){
  int ch;
  FILE *sfp, *dfp;
  char sname[FILENAME_MAX], dname[FILENAME_MAX];
  
  printf("コピー元のファイル名 :");   scanf("%s",sname);
  printf("コピー先のファイル名 :");   scanf("%s",dname);
  
  if((sfp=fopen(sname,"r"))==NULL)
    printf("\aコピー元のファイルを開くことができませんでした。\n");
  else{
    if((dfp=fopen(dname,"w"))==NULL)
      printf("\aコピー先のファイルを開くことができませんした。\n");
    else{
      printf("以下の内容を%sから%sへコピーしました。\n",sname,dname);
      puts("----ここから----");
      while((ch=fgetc(sfp))!=EOF){
        fputc(ch,dfp);
        putchar(ch);
      }
      putchar('\n');
      puts("----ここまで----");
    
      fclose(dfp);
    }
    
    fclose(sfp);
  }
  
  return 0;
}
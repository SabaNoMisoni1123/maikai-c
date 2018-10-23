/*　演習13-8　*/
#include <stdio.h>
#include <ctype.h>

int main(){
  int ch,select;
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
      puts("全てを大文字に変換してコピー...1  全てを小文字にしてコピー...0");
      do{
        printf("入力 :");   scanf("%d",&select);
      }while(select!=1 && select!=0);
      
      switch(select){
        case 0 :{
          puts("以下の文章をコピーしました。");
          while((ch=fgetc(sfp))!=EOF){
            putchar(tolower(ch));
            fputc(tolower(ch),dfp);
          }
          break;
        }
        case 1 :{
          puts("以下の文章をコピーしました。");
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
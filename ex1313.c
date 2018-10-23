/*　演習13-13　*/
#include <stdio.h>


int main(){
  char ch[128];
  FILE *sfp, *dfp;
  char sname[FILENAME_MAX], dname[FILENAME_MAX];
  
  printf("コピー元のファイル名 :");   scanf("%s",sname);
  printf("コピー先のファイル名 :");   scanf("%s",dname);
  
  if((sfp=fopen(sname,"r"))==NULL)
    printf("\aコピー元のファイルを開くことができませんでした。\n");
  else{
    if((dfp=fopen(dname,"wb"))==NULL)
      printf("\aコピー先のファイルを開くことができませんした。\n");
    else{
      printf("コピーしました。\n");
      while(fread(ch,1,128,sfp)>0){
        fwrite(ch,1,128,dfp);
      }
    
      fclose(dfp);
    }
    
    fclose(sfp);
  }
  
  puts("コピーの確認");
  fopen(dname,"rb");
  while(fread(ch,1,128,sfp)>0){
        printf("%s",ch);
      }
  
  return 0;
}
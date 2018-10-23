/*　演習13-1　*/
#include <stdio.h>

int main(){
  FILE *fp;
  char s[32];
  
  printf("探すファイル名を入力 :");
  scanf("%s",s);
  
  fp=fopen(s,"r");
  
  if(fp==NULL)
    printf("\aそのファイルは存在しません。\n");
  else{
    printf("\aそのファイルは存在します。\n");
    fclose(fp);
  }
  
  return 0;
}
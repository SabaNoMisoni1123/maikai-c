/*　演習13-2　*/
#include <stdio.h>

int main(){
  FILE *fp;
  char s[32];
  
  printf("消去するファイル名を入力 :");
  scanf("%s",s);
  
  fp=fopen(s,"w");
  
  if(fp==NULL)
    printf("\aそのファイルは存在しません。\n");
  else{
    printf("\aそのファイルの中身を消去しました。\n");
    fclose(fp);
  }
  
  return 0;
}
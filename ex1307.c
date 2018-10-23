/*　演習13-7　*/
#include <stdio.h>
int main(){
  char filename[FILENAME_MAX];
  FILE *fp;
  int ch,i;
  int count[10]={0};
  
  puts("読み込むファイル名を決定");
  printf("入力 :");   scanf("%s",filename);
  
  if((fp=fopen(filename,"r"))==NULL)
    printf("\aファイルを開くことができません。\n");
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
    
    puts("読み込んだファイルの中の数字文字の内訳は、");
    for(i=0;i<10;i++){
      printf("%dは%d個\n",i,count[i]);
    }
    puts("でした。");
  }
  return 0;
  
}
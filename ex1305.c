/*　演習13-5　*/
#include <stdio.h>
#include <time.h>

char data_file[]="datetime.dat";

void get_data(){
  FILE *fp;
  if((fp=fopen(data_file,"r"))==NULL)
    puts("本プログラムを実行するのは初めてですね。");
  else{
    int year,month,day,h,m,s;
    char feeling[128];
    fscanf(fp,"%d%d%d%d%d%d%s",&year,&month,&day,&h,&m,&s,feeling);
    printf("前回は%d年%d月%d日%d時%d分%d秒に実行し気分は\"%s\"でした。\n",year,month,day,h,m,feeling);
    
    fclose(fp);
  }
}

void put_date(){
  FILE *fp;
  time_t current =time(NULL);
  struct tm *timer=localtime(&current);
  char feeling[128];
  
  if((fp=fopen(data_file,"w"))==NULL)
    printf("\aファイルをオープンできません。\n");
  else{
    puts("今の気持ちを教えて！");
    printf("入力 :");
    scanf("%s",feeling);
    
    fprintf(fp,"%d %d %d %d %d %d %s\n",
      timer->tm_year+1900,timer->tm_mon+1,timer->tm_mday,
      timer->tm_hour,timer->tm_min,timer->tm_sec,feeling);
    
    fclose(fp);
  }
  
}

int main(){
  get_data();
  put_date();
  return 0;
}
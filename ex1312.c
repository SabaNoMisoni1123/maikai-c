/*　演習13-5　*/
#include <stdio.h>
#include <time.h>

char data_file[]="datetime.bin";
enum {year,month,day,h,m,s,nomber};

void get_data(){
  FILE *fp;
  if((fp=fopen(data_file,"rb"))==NULL)
    puts("本プログラムを実行するのは初めてですね。");
  else{
    int date[nomber];
    fread(date,sizeof(int),nomber,fp);
    printf("前回は%d年%d月%d日%d時%d分%d秒に実行しました。\n",date[year],date[month],date[day],date[h],date[m],date[s] );
    
    fclose(fp);
  }
}

void put_date(){
  FILE *fp;
  time_t current =time(NULL);
  struct tm *timer=localtime(&current);
  int date[nomber]={
    timer->tm_year+1900,timer->tm_mon+1,timer->tm_mday,
      timer->tm_hour,timer->tm_min,timer->tm_sec
  };
  
  if((fp=fopen(data_file,"wb"))==NULL)
    printf("\aファイルをオープンできません。\n");
  else{    
    fwrite(date,sizeof(int),nomber,fp);
    fclose(fp);
  }
  
}

int main(){
  get_data();
  put_date();
  return 0;
}
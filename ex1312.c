/*�@���K13-5�@*/
#include <stdio.h>
#include <time.h>

char data_file[]="datetime.bin";
enum {year,month,day,h,m,s,nomber};

void get_data(){
  FILE *fp;
  if((fp=fopen(data_file,"rb"))==NULL)
    puts("�{�v���O���������s����̂͏��߂Ăł��ˁB");
  else{
    int date[nomber];
    fread(date,sizeof(int),nomber,fp);
    printf("�O���%d�N%d��%d��%d��%d��%d�b�Ɏ��s���܂����B\n",date[year],date[month],date[day],date[h],date[m],date[s] );
    
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
    printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
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
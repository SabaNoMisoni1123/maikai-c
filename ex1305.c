/*�@���K13-5�@*/
#include <stdio.h>
#include <time.h>

char data_file[]="datetime.dat";

void get_data(){
  FILE *fp;
  if((fp=fopen(data_file,"r"))==NULL)
    puts("�{�v���O���������s����̂͏��߂Ăł��ˁB");
  else{
    int year,month,day,h,m,s;
    char feeling[128];
    fscanf(fp,"%d%d%d%d%d%d%s",&year,&month,&day,&h,&m,&s,feeling);
    printf("�O���%d�N%d��%d��%d��%d��%d�b�Ɏ��s���C����\"%s\"�ł����B\n",year,month,day,h,m,feeling);
    
    fclose(fp);
  }
}

void put_date(){
  FILE *fp;
  time_t current =time(NULL);
  struct tm *timer=localtime(&current);
  char feeling[128];
  
  if((fp=fopen(data_file,"w"))==NULL)
    printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
  else{
    puts("���̋C�����������āI");
    printf("���� :");
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
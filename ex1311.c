/*�@���K13-11�@*/
#include <stdio.h>

/*n�̔z��i�P�j���́i�葱���j�idouble�^�ɕύX�j*/
void set_ary1(double v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("d[%d] :",i);  scanf("%lf",&v[i]);
  }
}

/*�z��̕\���i�P�j������s�p�^�[��(double�^�ɕύX)*/
void put_ary1(double v[],int no){
  int i;

  for(i=0;i<no;i++)
    printf("d[%d]=%23.21f\n",i,v[i]);

  putchar('\n');
}

int main(){
  FILE *fp;
  double d[10];
  int select;
  char fname[FILENAME_MAX];
  
  
  printf("�t�@�C��������� :");   scanf("%s",fname);
  puts("�ǂݎ��...0  ��������...1");
  printf("���� :");   scanf("%d",&select);
  
  switch(select){
    case 0 :{
      if((fp=fopen(fname,"rb"))==NULL)
       printf("\a�t�@�C�����J�����Ƃ��ł��܂���B\n");
      else{
        puts("�ȉ����J�����t�@�C���̓��e�ł��B");
        fread(d,sizeof(double),10,fp);
        put_ary1(d,10);
      }
      fclose(fp);
      break;
    }
    case 1 :{
      if((fp=fopen(fname,"wb"))==NULL)
       printf("\a�t�@�C�����J�����Ƃ��ł��܂���B\n");
      else{
        puts("�������ސ��l����͂��܂��B");
        set_ary1(d,10);
        fwrite(d,sizeof(double),10,fp);
        puts("�������݂܂����B");
      }
      fclose(fp);
      break;
    }
    
  }
  
  return 0;
}
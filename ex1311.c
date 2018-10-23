/*　演習13-11　*/
#include <stdio.h>

/*n個の配列（１）入力（手続き）（double型に変更）*/
void set_ary1(double v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("d[%d] :",i);  scanf("%lf",&v[i]);
  }
}

/*配列の表示（１）毎回改行パターン(double型に変更)*/
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
  
  
  printf("ファイル名を入力 :");   scanf("%s",fname);
  puts("読み取り...0  書き込み...1");
  printf("入力 :");   scanf("%d",&select);
  
  switch(select){
    case 0 :{
      if((fp=fopen(fname,"rb"))==NULL)
       printf("\aファイルを開くことができません。\n");
      else{
        puts("以下が開いたファイルの内容です。");
        fread(d,sizeof(double),10,fp);
        put_ary1(d,10);
      }
      fclose(fp);
      break;
    }
    case 1 :{
      if((fp=fopen(fname,"wb"))==NULL)
       printf("\aファイルを開くことができません。\n");
      else{
        puts("書き込む数値を入力します。");
        set_ary1(d,10);
        fwrite(d,sizeof(double),10,fp);
        puts("書き込みました。");
      }
      fclose(fp);
      break;
    }
    
  }
  
  return 0;
}
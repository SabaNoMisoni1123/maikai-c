/*　演習13-4　*/
#include <stdio.h>

/*自然数入力*/
int scan_pint (void);



typedef struct {
  char name[64];
  double height,weight;
} Person;

/*情報の入力*/
Person scan_data();

int main(){
  FILE *fp;
  char filename[64];
  int i,no;
  
  printf("書き込み先のファイル名を入力 :");
  scanf("%s",filename);
  
  if((fp=fopen(filename,"w"))==NULL)
    printf("\aファイルを開くことができません。\n");
  else{
    puts("読みこむ情報の人数を決定します。");
    no=scan_pint();
    
    Person per[no];
    for(i=0;i<no;i++){
      per[i]=scan_data();
    }
    
    puts("入力した情報を書き出しました。");
    for(i=0;i<no;i++){
      fprintf(fp,"%-20s %5.1f %5.1lf\n",per[i].name,per[i].height,per[i].weight);
    }
    
    fclose(fp);
  }
}


/*後から関数の説明*/

/*自然数入力*/
int scan_pint (void){
  int no;

  do{
    printf("入力 :");
    scanf("%d",&no);

    if(no<=0)  puts("自然数で入力してください。");
  }while(no<=0);

  return no;
}

Person scan_data(){
  Person temp;
  printf("名前 :");   scanf("%s",temp.name);
  printf("身長 :");   scanf("%lf",&temp.height);
  printf("体重 :");   scanf("%lf",&temp.weight);
  putchar('\n');
  return temp;
}

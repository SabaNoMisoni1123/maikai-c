/*　演習6-12　*/
#include <stdio.h>

void mat_mul(const int a[4][3],const int b[3][4],int c[4][4]){
  int i,j,k,sum;
    
  for(i=0;i<4;i++)          /*行列の積の計算*/
    for(j=0;j<4;j++){
    sum=0;
      for(k=0;k<3;k++)
        sum+=a[i][k]*b[k][j];

      c[i][j]=sum;
    }
}

/*行列の入力*/
void set_ary_43_34(int a[4][3],int b[3][4]){
  int retry;
  int i,j;

  puts("行列を入力します。");

  printf("%d行%d列行列の入力\n",4,3);

  do{
    for(i=0;i<4;i++)    /*行列入力1つ目*/
      for(j=0;j<3;j++){
        printf("%d行%d列 :",i+1,j+1);
        scanf("%d",&a[i][j]);
      }  

      for(i=0;i<4;i++){    /*行列確認1つ目*/
        printf("| ");

        for(j=0;j<3;j++)
          printf("%3d ",a[i][j]);

        printf("|\n");
      }

    puts("この行列でOK？");

    printf("Yes>>>0  No>>>9  :");    /*入力決定の確認*/
    scanf("%d",&retry);
  }while(retry==9);


  printf("%d行%d列行列の入力\n",3,4);

  do{
    for(i=0;i<3;i++)    /*行列入力2つ目*/
      for(j=0;j<4;j++){
        printf("%d行%d列 :",i+1,j+1);
        scanf("%3d",&b[i][j]);
      }

      for(i=0;i<3;i++){    /*行列確認2つ目*/
        printf("| ");

        for(j=0;j<4;j++)
          printf("%d ",b[i][j]);

        printf("|\n");
      }

    puts("この行列でOK？");

    printf("Yes>>>0  No>>>9  :");    /*入力決定の確認*/
    scanf("%d",&retry);
  }while(retry==9);
}

/*４＊４行列の表示*/
void put_ary2(int v[4][4]){
  int i,j;

  for(i=0;i<4;i++){
    printf("| ");

    for(j=0;j<4;j++)
      printf("%d ",v[i][j]);

    printf("|\n");
  }
}

int main(void){
  int a[4][3];
  int b[3][4];
  int c[4][4];
  
  set_ary_43_34(a,b);
  
  puts("積を計算します。");
  
  mat_mul(a,b,c);
  
  puts("計算結果");
  
  put_ary2(c);
  
  return 0;
}
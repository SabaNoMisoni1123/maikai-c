/*　演習5-10　*/

#include <stdio.h>

#define N1 4
#define N2 3
#define N3 4

/*N1行N2列行列とN2行N3列行列の積を求める*/

int main(void)
{
  printf("%d行%d列行列と",N1,N2);
  printf("%d行%d列行列の積を求めます。\n",N2,N3);

  int a[N1][N2];  /*N1行N2列行列*/
  int b[N2][N3];  /*N2行N3列行列*/
  int ans[N1][N3]={0};  /*計算後の行列*/
  int i,j,k,sum;  /*行列入力や計算、その他もろもろのfor文に使用*/
  int retry;  /*行列入力の最終確認に使用*/

  puts("行列を入力します。");

  printf("%d行%d列行列の入力\n",N1,N2);

  do{
    for(i=0;i<N1;i++)    /*行列入力1つ目*/
      for(j=0;j<N2;j++){
        printf("%d行%d列 :",i+1,j+1);
        scanf("%d",&a[i][j]);
      }

    for(i=0;i<N1;i++){    /*行列確認1つ目*/
      printf("| ");

      for(j=0;j<N2;j++)
        printf("%d ",a[i][j]);

      printf("|\n");
    }

    puts("この行列でOK？");

    printf("Yes>>>0  No>>>9  :");    /*入力決定の確認*/
    scanf("%d",&retry);
  }while(retry==9);


  printf("%d行%d列行列の入力\n",N2,N3);

  do{
    for(i=0;i<N2;i++)    /*行列入力2つ目*/
      for(j=0;j<N3;j++){
        printf("%d行%d列 :",i+1,j+1);
        scanf("%d",&b[i][j]);
      }

    for(i=0;i<N2;i++){    /*行列確認2つ目*/
      printf("| ");

      for(j=0;j<N3;j++)
        printf("%d ",b[i][j]);

      printf("|\n");
    }

    puts("この行列でOK？");

    printf("Yes>>>0  No>>>9  :");    /*入力決定の確認*/
    scanf("%d",&retry);
  }while(retry==9);

  for(i=0;i<N1;i++)    /*行列の積の計算*/
    for(j=0;j<N3;j++){
      sum=0;
      for(k=0;k<N2;k++)
        sum+=a[i][k]*b[k][j];

      ans[i][j]=sum;
    }

  puts("計算結果");

  for(i=0;i<N1;i++){    /*計算結果表示*/
    printf("| ");

    for(j=0;j<N3;j++)
      printf("%d ",ans[i][j]);

    printf("|\n");
  }

  return 0;
}
/*�@���K5-10�@*/

#include <stdio.h>

#define N1 4
#define N2 3
#define N3 4

/*N1�sN2��s���N2�sN3��s��̐ς����߂�*/

int main(void)
{
  printf("%d�s%d��s���",N1,N2);
  printf("%d�s%d��s��̐ς����߂܂��B\n",N2,N3);

  int a[N1][N2];  /*N1�sN2��s��*/
  int b[N2][N3];  /*N2�sN3��s��*/
  int ans[N1][N3]={0};  /*�v�Z��̍s��*/
  int i,j,k,sum;  /*�s����͂�v�Z�A���̑���������for���Ɏg�p*/
  int retry;  /*�s����͂̍ŏI�m�F�Ɏg�p*/

  puts("�s�����͂��܂��B");

  printf("%d�s%d��s��̓���\n",N1,N2);

  do{
    for(i=0;i<N1;i++)    /*�s�����1��*/
      for(j=0;j<N2;j++){
        printf("%d�s%d�� :",i+1,j+1);
        scanf("%d",&a[i][j]);
      }

    for(i=0;i<N1;i++){    /*�s��m�F1��*/
      printf("| ");

      for(j=0;j<N2;j++)
        printf("%d ",a[i][j]);

      printf("|\n");
    }

    puts("���̍s���OK�H");

    printf("Yes>>>0  No>>>9  :");    /*���͌���̊m�F*/
    scanf("%d",&retry);
  }while(retry==9);


  printf("%d�s%d��s��̓���\n",N2,N3);

  do{
    for(i=0;i<N2;i++)    /*�s�����2��*/
      for(j=0;j<N3;j++){
        printf("%d�s%d�� :",i+1,j+1);
        scanf("%d",&b[i][j]);
      }

    for(i=0;i<N2;i++){    /*�s��m�F2��*/
      printf("| ");

      for(j=0;j<N3;j++)
        printf("%d ",b[i][j]);

      printf("|\n");
    }

    puts("���̍s���OK�H");

    printf("Yes>>>0  No>>>9  :");    /*���͌���̊m�F*/
    scanf("%d",&retry);
  }while(retry==9);

  for(i=0;i<N1;i++)    /*�s��̐ς̌v�Z*/
    for(j=0;j<N3;j++){
      sum=0;
      for(k=0;k<N2;k++)
        sum+=a[i][k]*b[k][j];

      ans[i][j]=sum;
    }

  puts("�v�Z����");

  for(i=0;i<N1;i++){    /*�v�Z���ʕ\��*/
    printf("| ");

    for(j=0;j<N3;j++)
      printf("%d ",ans[i][j]);

    printf("|\n");
  }

  return 0;
}
/*�@���K6-12�@*/
#include <stdio.h>

void mat_mul(const int a[4][3],const int b[3][4],int c[4][4]){
  int i,j,k,sum;
    
  for(i=0;i<4;i++)          /*�s��̐ς̌v�Z*/
    for(j=0;j<4;j++){
    sum=0;
      for(k=0;k<3;k++)
        sum+=a[i][k]*b[k][j];

      c[i][j]=sum;
    }
}

/*�s��̓���*/
void set_ary_43_34(int a[4][3],int b[3][4]){
  int retry;
  int i,j;

  puts("�s�����͂��܂��B");

  printf("%d�s%d��s��̓���\n",4,3);

  do{
    for(i=0;i<4;i++)    /*�s�����1��*/
      for(j=0;j<3;j++){
        printf("%d�s%d�� :",i+1,j+1);
        scanf("%d",&a[i][j]);
      }  

      for(i=0;i<4;i++){    /*�s��m�F1��*/
        printf("| ");

        for(j=0;j<3;j++)
          printf("%3d ",a[i][j]);

        printf("|\n");
      }

    puts("���̍s���OK�H");

    printf("Yes>>>0  No>>>9  :");    /*���͌���̊m�F*/
    scanf("%d",&retry);
  }while(retry==9);


  printf("%d�s%d��s��̓���\n",3,4);

  do{
    for(i=0;i<3;i++)    /*�s�����2��*/
      for(j=0;j<4;j++){
        printf("%d�s%d�� :",i+1,j+1);
        scanf("%3d",&b[i][j]);
      }

      for(i=0;i<3;i++){    /*�s��m�F2��*/
        printf("| ");

        for(j=0;j<4;j++)
          printf("%d ",b[i][j]);

        printf("|\n");
      }

    puts("���̍s���OK�H");

    printf("Yes>>>0  No>>>9  :");    /*���͌���̊m�F*/
    scanf("%d",&retry);
  }while(retry==9);
}

/*�S���S�s��̕\��*/
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
  
  puts("�ς��v�Z���܂��B");
  
  mat_mul(a,b,c);
  
  puts("�v�Z����");
  
  put_ary2(c);
  
  return 0;
}
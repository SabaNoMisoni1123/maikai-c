/*�@���K5-8�@*/
#include <stdio.h>

#define NOMBER 80  /*�l���̏��*/

int main(void)
{
  int i,j;
  int no;  /*���ۂ̐l��*/
  int tensu[NOMBER];  /*�_��*/
  int bunpu[11]={0};  /*���z*/

  do {
    printf("�l������͂��Ă������� :");  scanf("%d",&no);

    if (no<1 || no>NOMBER)
      printf("\a1�`%d�l�œ��͂��Ă��������B",NOMBER);
  } while(no<1 || no>NOMBER);

  puts("�_������͂��Ă��������B");

  for(i=0 ; i<no ; i++) {
    do {
      printf("%d�� :",i+1);  scanf("%d",&tensu[i]);

      if(tensu[i]<1 || tensu[i]>100)
        puts("1�`100�_�œ��͂��Ă��������B");
    } while(tensu[i]<1 || tensu[i]>100);

    bunpu[tensu[i]/10]++;
  }

  printf("\n---���z�O���t---\n");

  for(i=0 ; i<=9 ; i++) {
    printf("%3d�`%3d :",i*10,i*10+9);

    for(j=0 ; j<bunpu[i] ; j++)
      putchar('*');

    putchar('\n');
  }

  printf("     100 :");

  for(i=0 ; i<bunpu[10] ; i++)
    putchar('*');

  putchar('\n');

  return 0;
}
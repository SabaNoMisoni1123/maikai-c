/*　演習5-8　*/
#include <stdio.h>

#define NOMBER 80  /*人数の上限*/

int main(void)
{
  int i,j;
  int no;  /*実際の人数*/
  int tensu[NOMBER];  /*点数*/
  int bunpu[11]={0};  /*分布*/

  do {
    printf("人数を入力してください :");  scanf("%d",&no);

    if (no<1 || no>NOMBER)
      printf("\a1～%d人で入力してください。",NOMBER);
  } while(no<1 || no>NOMBER);

  puts("点数を入力してください。");

  for(i=0 ; i<no ; i++) {
    do {
      printf("%d番 :",i+1);  scanf("%d",&tensu[i]);

      if(tensu[i]<1 || tensu[i]>100)
        puts("1～100点で入力してください。");
    } while(tensu[i]<1 || tensu[i]>100);

    bunpu[tensu[i]/10]++;
  }

  printf("\n---分布グラフ---\n");

  for(i=0 ; i<=9 ; i++) {
    printf("%3d～%3d :",i*10,i*10+9);

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
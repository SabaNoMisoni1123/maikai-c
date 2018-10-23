/*　演習5-7　*/
#include <stdio.h>

#define NOMBER 30  /*データ数の上限*/

int main(void)
{
  puts("データ数を指定してその分数値を入力してください。");

  int no,i;
  int v[NOMBER];

  do {
    printf("データ数 :");  scanf("%d",&no);

    if (no<1 || no>NOMBER)
      printf("データ数として指定できません（%d以下で）",NOMBER);
  }while (no<1 || no>NOMBER);

  for (i=0 ; i<no ; i++) {
    printf("%d番 :",i+1);
    scanf("%d",&v[i]);
  }

  putchar('{');
  for (i=0 ; i<no-1 ; i++)
    printf("%d, ",v[i]);
  printf("%d}\n",v[i]);

  return 0;
} 
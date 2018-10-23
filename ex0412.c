/*　演習4-12　*/

#include <stdio.h>

int main(void)
{
  int no,r;

  do
  {
    printf("正の整数を入力してください :");
    scanf("%d",&no);

    if (no<=0) printf("\a%dは正の整数ではありません。\n",no);
  } while (no<=0);

  r=0;

  printf("%dは",no);

  while (no>0)
  {
    r+=1;

    no/=10;
  };

  printf("%d桁です。\n",r);

  return 0;
}
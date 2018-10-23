/*　演習4-13　*/

#include <stdio.h>

int main(void)
{
  int no,p;
  int q=0;

  do
  {
    printf("正の整数を入力してください :");
    scanf("%d",&no);

    if (no<=0) printf("\a%dは正の整数ではありません。\n",no);
  } while (no<=0);  

  for (p=1; p<=no; p++)
  {
    q+=p;
  }

  printf("1から%dまでの和は%dです。\n",no,q);

  return 0;
}
/*　演習4-2　*/

#include <stdio.h>

int main(void)
{
  int max,min;
  int sum=0;

  {  
    int a,b;

    puts("2つ整数を入力してください。");

    printf("整数a :");  scanf("%d", &a);
    printf("整数b :");  scanf("%d", &b);

    if (a>b)
    {
      max=a; min=b;
    }
    else
    {
      min=a; max=b;
    }
  }

  printf("%d以上%d以下の全整数の和は", min, max);

  int p=min;

  do
    {
      sum=sum+p;

      p += 1;
    } while (p<=max);

  printf("%dです。\n",sum);

  return 0;
}
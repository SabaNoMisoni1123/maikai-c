/*�@���K4-2�@*/

#include <stdio.h>

int main(void)
{
  int max,min;
  int sum=0;

  {  
    int a,b;

    puts("2��������͂��Ă��������B");

    printf("����a :");  scanf("%d", &a);
    printf("����b :");  scanf("%d", &b);

    if (a>b)
    {
      max=a; min=b;
    }
    else
    {
      min=a; max=b;
    }
  }

  printf("%d�ȏ�%d�ȉ��̑S�����̘a��", min, max);

  int p=min;

  do
    {
      sum=sum+p;

      p += 1;
    } while (p<=max);

  printf("%d�ł��B\n",sum);

  return 0;
}
/*�@���K4-4�@*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("��������͂��Ă������� :");  scanf("%d", &no);

  if (no>=1)
  {
    while (no>=1)
    {
      printf("%d", no);

      no--;
    }
  }

  return 0;
}
/*�@���K4-3�@*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("��������͂��Ă������� :");  scanf("%d", &no);

  if (no>=0)
  {
    while (no>=0)
    {
      printf("%d ", no);

      no--;
    }
  }

  return 0;
}
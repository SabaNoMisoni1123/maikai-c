/*�@���K4-19�@*/

#include <stdio.h>
int main(void)
{
  puts("�񐔂�S�ďグ�܂��B");

  int no,i;

  int count=0;

  do
  {
    printf("n�̒l�i���R���j :");  scanf("%d",&no);
  } while(no<=0);

  for ( i=1 ; i<=no ; i++ )
  {
    if (no%i==0)
    {
      printf("%d\n",i);

      count+=1;
    }
  }

  printf("%d�̖񐔂�%d�ł��B",no,count);

  return 0;
}
  
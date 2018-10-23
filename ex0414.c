/*@‰‰K4-13@*/

#include <stdio.h>

int main(void)
{
  int no;

  do
  {
    printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ :");
    scanf("%d",&no);

    if (no<=0) printf("\a%d‚Í³‚Ì®”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n",no);
  } while (no<=0);  

  for ( ; no>10 ; no-=10 )
  {
    printf("1234567890");
  }

  switch (no)
  {
    case 1 : printf("1\n"); break;
    case 2 : printf("12\n"); break;
    case 3 : printf("123\n"); break;
    case 4 : printf("1234\n"); break;
    case 5 : printf("12345\n"); break;
    case 6 : printf("123456\n"); break;
    case 7 : printf("1234567\n"); break;
    case 8 : printf("12345678\n"); break;
    case 9 : printf("123456789\n"); break;
    case 0 : printf("\n"); break;
  }

  return 0;
}
/*�@���K4-1�@�D���Ȃ�����������@*/

#include <stdio.h>

int main(void)
{
  int retry;

  do {
    int no;

    printf("��������͂��Ă������� :");
    scanf("%d", &no);

    if (no>0) puts("���̐��͐��ł��B");
    else if (no==0) puts("���̐���0�ł��B");
    else puts("���̐��͕��ł��B");

    printf("������x���܂����H��yes...0  no...9�� :");
    scanf("%d", &retry);
  }  while (retry==0);

  return 0;
}
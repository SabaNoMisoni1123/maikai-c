/*�@���K9-7�@*/
#include <stdio.h>
void put_suringn(const char s[],int n) {
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;s[j];j++){
      putchar(s[j]);
    }
    putchar('\n');
  }
}

/*���R������*/
int scan_pint (void){
  int no;

  do{
    printf("���� :");
    scanf("%d",&no);

    if(no<=0)  puts("���R���œ��͂��Ă��������B");
  }while(no<=0);

  return no;
}

int main(void){
  char s[128];
  puts("������i�p��j�����");
  printf("���� :");
  scanf("%s",s);

  puts("�������\\������񐔂����");
  int n=scan_pint();

  put_suringn(s,n);

  return 0;
}

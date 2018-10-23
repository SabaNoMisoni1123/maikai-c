/*　演習9-7　*/
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

/*自然数入力*/
int scan_pint (void){
  int no;

  do{
    printf("入力 :");
    scanf("%d",&no);

    if(no<=0)  puts("自然数で入力してください。");
  }while(no<=0);

  return no;
}

int main(void){
  char s[128];
  puts("文字列（英語）を入力");
  printf("入力 :");
  scanf("%s",s);

  puts("文字列を表\示する回数を入力");
  int n=scan_pint();

  put_suringn(s,n);

  return 0;
}

/*�@���K8-10�@*/
#include <stdio.h>


int main(void){
  int ch;   /*����*/
  int cnt[10]={0};    /*�J�E���^*/
  int i;
  
  puts("��������͂��Ă��������B");
  
  while((ch=getchar())!=EOF){
    if(ch>='0' && ch<='9')
      cnt[ch-'0']++;
  }
  
  puts("�����̓���");
  
  for(i=0;i<10;i++){
    printf("%d :",i);
    for(;cnt[i]>0;cnt[i]--)
      putchar('*');
    putchar('\n');
  }
  
  return 0;
}

/*�@���K11-6�@*/
#include <stdio.h>
/*������̓��́i�葱���j*/
void scan_str(char s[]){
  printf("���� :");
  scanf("%s",s);
  putchar('\n');
}

char *str_chr(const char *s, int c){
  char *ans;
  ans=NULL;
  do{
    if(*s==c){
      ans=(char *)s;
      break;
    }
  }while(*s++);
  
  return ans;
}


int main(void){
  char s[128];
  char c;
  char *find;
  puts("���������́i�p�����Łj");
  scan_str(s);
  
  puts("�T����������́i1�����j");
  printf("���� :");
  scanf(" %c",&c);
  
  find=str_chr(s,c);
  
  if(find==NULL)
    puts("�T���������͂���܂���ł����B");
  else
    printf("�T��������%c��\"%p\"�ɂ���܂��B\n",*find,find);
  
  return 0;
}
/*�@���K11-8�@*/
#include <stdio.h>

/*������̓��́i�葱���j*/
void scan_str(char s[]){
  printf("���� :");
  scanf("%s",s);
  putchar('\n');
}

void del_digit(char *s){
  int count=0;
  do{
    if(*s>='0' && *s<='9'){
      count++;
    }
    else if(count>0){
      *(s-count)=*s;
    }
  }while(*s++);
}

int main(){
  char s[128];
  scan_str(s);
  
  puts("���͂��������񂩂琔���̂ݍ폜���܂��B");
  del_digit(s);
  printf("%s\n",s);
  
  return 0;
}
/*�@���K11-7�@*/
#include <stdio.h>
#include <ctype.h>

/*������̓��́i�葱���j*/
void scan_str(char s[]){
  printf("���� :");
  scanf("%s",s);
  putchar('\n');
}

void str_toupper(char *s){
  while(*s=toupper(*s)){
    *s++;
  }
}

void str_tolower(char *s){
  while(*s=tolower(*s)){
    *s++;
  }
}

int main(){
  int choice;
  char s[128];
  scan_str(s);
  
  puts("1...���ׂđ啶��  0...���ׂď�����");
  do{
    printf("���� :");
    scanf("%d",&choice);
  }while(choice!=0 && choice!=1);
  putchar('\n');
  
  switch(choice){
    case 0 : str_tolower(s);  break;
    case 1 : str_toupper(s);  break;
  }
  
  printf("%s\n",s);
  
  return 0;
}


/*�@���K9-9�@*/
#include <stdio.h>
void rev_string(char s[]){
  int count=0;
  int i;
  while(s[count])   /*�������J�E���g*/
    count++;
  
  for(i=0;i<(count/2);i++){
    char temp=s[i];
    s[i]=s[(count-1)-i];
    s[(count-1)-i]=temp;
  }
}

/*������i�����萔�̔z��j�o�́i�i�������܂Łj*/
void put_string(const char s[]){
  int i=0;
  while(s[i])
    putchar(s[i++]);
}

/*������̓��́i�葱���j*/
void scan_str(char s[]){
  printf("���� :");
  scanf("%s",s);
  putchar('\n');
}

int main(void){
  puts("���͂���������̔z��𕶎��̂݋t���ɂ���B");
  
  char s[128];
  scan_str(s);
  
  rev_string(s);
  
  put_string(s);
  
  return 0;
}
  
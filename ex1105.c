/*@‰‰K11-5@*/
#include <stdio.h>
int str_chnum(const char *s,int c){
  int count=0;
  while(*s){
    if(*s++==c){
      count++;
    }
  }
  return count;
}

/*•¶š—ñ‚Ì“ü—Íiè‘±‚«j*/
void scan_str(char s[]){
  printf("“ü—Í :");
  scanf("%s",s);
  putchar('\n');
}


int main(void){
  char s[128];
  char c;

  puts("‰p”š‚Å•¶š‚ğ“ü—Í");
  scan_str(s);

  puts("’T‚·•¶š‚ğ“ü—Í");
  printf("“ü—Í :");
  scanf(" %c",&c);

  printf("%c‚ªŒ»‚ê‚½‰ñ”‚Í%d‰ñ\n",c,str_chnum(s,c));

  return 0;
}

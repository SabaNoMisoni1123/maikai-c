/*@‰‰K9-6@*/
#include <stdio.h>
int str_chum(const char s[],const int c){
  int count=0;
  int i;
  for(i=0;s[i];i++){
    if(s[i]==c){
      count++;
    }
  }
  return count;
}

int main(void) {
  char s[128];
  char c;
  puts("•¶š—ñ‚Ì“ü—Í");
  printf("“ü—Í :");
  scanf("%s",s);

  puts("’T‚·•¶š‚Ì“ü—Í");
  printf("“ü—Í :");
  scanf(" %c",&c);

  printf("•¶š—ñ’†‚Ì%c‚Ì”‚Í%dŒÂ",c,str_chum(s,c));
  return 0;
}

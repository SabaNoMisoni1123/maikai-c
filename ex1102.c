/*�@���K11-2�@*/
#include <stdio.h>

#define Countof(ary) (sizeof(ary)/sizeof(ary[0]))

 /*������̔z��̏o�́i�\������z�񐔂͎w��j*/
void put_nstrary(const char s[][5/*�z�񓖂���̕�����*/],int n){
  int i,j;
  for(i=0;i<n;i++)
    printf("s[%d] = \" %s \"\n",i,s[i]);
}

/*������̃|�C���^�̏o�́i�\������z�񐔂͎w��j*/
void put_nstrptr(char *s[],int n){
  int i,j;
  for(i=0;i<n;i++)
    printf("s[%d] = \" %s \"\n",i,s[i]);
}

int main(void){
  int i;
  
  char a[][5]={ "lisp", "c", "ada", "saba"};
  char *p[]={ "jhon", "ted", "x", "asdf", "ashjk"};
  
  for(i=0;i<Countof(a);i++)
    printf("a[%d]=\"%s\"\n",i,a[i]);
  
  for(i=0;i<Countof(p);i++)
    printf("p[%d]=\"%s\"\n",i,p[i]);
  
  puts("�ȉ��e�X�g");
  put_nstrary(a,Countof(a));
  put_nstrptr(p,Countof(p));
  
  
  
  return 0;
}
  
  
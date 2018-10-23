/*　演習6-14　*/

#include <stdio.h>

/*配列の表示（１）毎回改行パターン*/
void put_ary1(double v[],int no){
  int i;

  for(i=0;i<no;i++)
    printf("%f\n",v[i]);

  putchar('\n');
}

int main(void){
  static double v[5];
  
  put_ary1(v,5);
  
  return 0;
}
/*　演習7-9　*/
#include <stdio.h>
#include <math.h>

/*非負の実数の入力*/
double scan_pdouble(void){
  double no;
  do{
    printf("入力 :");
    scanf("%lf",&no);
    
    if(no<0)
      puts("非負の実数で入力してください。");
  }while(no<0);
  
  return no;
}


int main(void){  
  puts("面積を入力してください。その面積の正方形の一辺の長さを表\示します。");
  double x=scan_pdouble();
  
  printf("面積が%fの正方形の一辺の長さは%fです。\n",x,sqrt(x));
  
  return 0;
}
  
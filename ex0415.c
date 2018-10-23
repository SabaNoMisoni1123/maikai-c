/*　演習4-15　*/


#include <stdio.h>


int main(void)

{

  int a,b;
  int H,L;
  int p,q;



  printf("指定した身長に対する標準体重を算出します。\n");



  printf("何cmから何cmまでか、また何cm刻みで算出するのかを整数で入力してください。\n");



  do

  {

    printf("何cmから :");  scanf("%d",&a);

    printf("何cmまで :");  scanf("%d",&b);

    
    if (a<=100 || b<=100)  puts("100cm以下では標準体重を計算できません。");

    else if (a==b)  printf("異なる身長でお願いします。\n");
  
  } while ((a<=100 || b<=100) || a==b);



  if (a>b) {H=a;  L=b;}

  else {L=a;  H=b;}

  
  q=H-L;



  do

  {

    printf("何cm刻み :");  scanf("%d", &p);


    if (p>q) puts("刻めません");


    if (q%p) puts("システム上の理由のため身長差の約数でお願いします。");

  } while(p>q || q%p);

  

int r;



  for (r=H ; r>=L ; r-=p)
 
    printf("%d cmでの標準体重は%.2f kgです。\n", r, (double)(r-100)*0.9);



  return 0;

}
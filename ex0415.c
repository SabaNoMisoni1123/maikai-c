/*�@���K4-15�@*/


#include <stdio.h>


int main(void)

{

  int a,b;
  int H,L;
  int p,q;



  printf("�w�肵���g���ɑ΂���W���̏d���Z�o���܂��B\n");



  printf("��cm���牽cm�܂ł��A�܂���cm���݂ŎZ�o����̂��𐮐��œ��͂��Ă��������B\n");



  do

  {

    printf("��cm���� :");  scanf("%d",&a);

    printf("��cm�܂� :");  scanf("%d",&b);

    
    if (a<=100 || b<=100)  puts("100cm�ȉ��ł͕W���̏d���v�Z�ł��܂���B");

    else if (a==b)  printf("�قȂ�g���ł��肢���܂��B\n");
  
  } while ((a<=100 || b<=100) || a==b);



  if (a>b) {H=a;  L=b;}

  else {L=a;  H=b;}

  
  q=H-L;



  do

  {

    printf("��cm���� :");  scanf("%d", &p);


    if (p>q) puts("���߂܂���");


    if (q%p) puts("�V�X�e����̗��R�̂��ߐg�����̖񐔂ł��肢���܂��B");

  } while(p>q || q%p);

  

int r;



  for (r=H ; r>=L ; r-=p)
 
    printf("%d cm�ł̕W���̏d��%.2f kg�ł��B\n", r, (double)(r-100)*0.9);



  return 0;

}
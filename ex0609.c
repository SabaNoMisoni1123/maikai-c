/*�@���K6-9�@*/

#include <stdio.h>



/*n�̔z�����*/

void set_ary(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i+1);  scanf("%d",&v[i]);
  }
}

/*���R������*/

int scan_pint (void){
  int no;

  do{
    puts("���R������͂��Ă��������B");

    printf("���R�� :");  scanf("%d",&no);

    if(no<=0)  puts("���R���ł͂���܂���B");
  }while(no<=0);

  return no;
}


/*�z��̋t�]*/

void rev_intary(int v[],int no){
  int i;


  if(no%2==0)
    for(i=0;i<=no/2;i++){
      int temp=v[i];
      v[i]=v[(no-1)-i];
      v[(no-1)-i]=temp;
    }

  else
    for(i=0;i<=(no-1)/2;i++){
      int temp=v[i];
      v[i]=v[(no-1)-i];
      v[(no-1)-i]=temp;
    }
}


/*�z��̕\���i�P�j*/

void put_ary1(int v[],int no){
  int i;

  for(i=0;i<no;i++)
    printf("%d\n",v[i]);

  putchar('\n');
}


int main(void){
  puts("�z��̗v�f�̌������߂܂��B");

  int no=scan_pint();

  int v[no];

  set_ary(v,no);

  rev_intary(v,no);

  put_ary1(v,no);

  return 0;
}


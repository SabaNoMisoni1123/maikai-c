/*�@���K6-10�@*/
#include <stdio.h>

void intary_rcpy(int v1[],const int v2[],int no){
    int i;
    for(i=0;i<no;i++)
        v1[i]=v2[(no-1)-i];
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

/*n�̔z��i�P�j����*/

void set_ary1(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i+1);  scanf("%d",&v[i]);
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
    int no=scan_pint();
    
    int v1[no];
    int v2[no];
    
    set_ary1(v2,no);
    
    intary_rcpy(v1,v2,no);
    
    puts("�z��v2�͈ȉ��̒ʂ�B");
    put_ary1(v2,no);
    
    puts("v2�𔽓]�������̂��i�[����v1�͈ȉ��̒ʂ�B");
    put_ary1(v1,no);
    
    return 0;
}




/*�@���K6-11�@*/
#include <stdio.h>

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

/*�T��*/
int search_idx(const int v[],int idx[],int key,int n){
    int i;
    
    int count=0;
    
    for(i=0;i<n;i++)
        if(v[i]==key){
        idx[count]=i;
        count++;
        }       
    
    return count;
}

/*�z��̕\���i�P�j���������g���p�^�[��*/
void put_ary1(int v[],int no){
  int i;

  printf("{ ");

  for(i=0;i<no;i++)
    printf("%d ",v[i]);

  printf("}");

  putchar('\n');
}

/*n�̔z��i�P�j����*/
void set_ary1(int v[],int no){
  int i;

  for(i=0;i<no;i++){
    printf("v[%d] :",i);  scanf("%d",&v[i]);
  }
}

int main(void){
    printf("�z��̗v�f���ƂȂ�");
    int no=scan_pint();    /*�z��̌��̌���*/
    
    int idx[no];    /*���������Y�������L�^*/
    int fin;    /*����ȂǂɎg��*/
    
    int v[no];    /*�T����*/
    set_ary1(v,no);
    
    int key;    /*�T����*/
    puts("�z��̒�����T��������������͂��Ă��������B");
    printf("���� :");  scanf("%d",&key);
    
    fin=search_idx(v,idx,key,no);
    
    if(fin==0)
        puts("�T���Ɏ��s���܂����B");
    
    else{
        printf("%d��%d�𔭌����܂����B\n",fin,key);
        
        puts("������������v[]�̓Y�����͈ȉ��̒ʂ�ł��B");
        
        put_ary1(idx,fin);
    }
    
    return 0;
}

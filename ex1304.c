/*�@���K13-4�@*/
#include <stdio.h>

/*���R������*/
int scan_pint (void);



typedef struct {
  char name[64];
  double height,weight;
} Person;

/*���̓���*/
Person scan_data();

int main(){
  FILE *fp;
  char filename[64];
  int i,no;
  
  printf("�������ݐ�̃t�@�C��������� :");
  scanf("%s",filename);
  
  if((fp=fopen(filename,"w"))==NULL)
    printf("\a�t�@�C�����J�����Ƃ��ł��܂���B\n");
  else{
    puts("�ǂ݂��ޏ��̐l�������肵�܂��B");
    no=scan_pint();
    
    Person per[no];
    for(i=0;i<no;i++){
      per[i]=scan_data();
    }
    
    puts("���͂������������o���܂����B");
    for(i=0;i<no;i++){
      fprintf(fp,"%-20s %5.1f %5.1lf\n",per[i].name,per[i].height,per[i].weight);
    }
    
    fclose(fp);
  }
}


/*�ォ��֐��̐���*/

/*���R������*/
int scan_pint (void){
  int no;

  do{
    printf("���� :");
    scanf("%d",&no);

    if(no<=0)  puts("���R���œ��͂��Ă��������B");
  }while(no<=0);

  return no;
}

Person scan_data(){
  Person temp;
  printf("���O :");   scanf("%s",temp.name);
  printf("�g�� :");   scanf("%lf",&temp.height);
  printf("�̏d :");   scanf("%lf",&temp.weight);
  putchar('\n');
  return temp;
}

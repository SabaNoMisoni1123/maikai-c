/*�@���K12-4�@*/
#include <stdio.h>
#include <string.h>

#define NOMBER 5
#define NAME_LEN 64

typedef struct ex1204 {
  char name[NAME_LEN];
  int height;
  float weight;
  long schols;
} Student;

void swap_Student (Student *x,Student *y){
  Student temp=*x;
  *x=*y;
  *y=temp;
}

/*�o�u���\�[�g���g���Đg������*/
void sort_by_height(Student a[],int n){
  int i,j;
  
  for(i=0;i<n-1;i++)
    for(j=n-i;j>i;j--)
      if(a[j-1].height > a[j].height)
        swap_Student(&a[j-1],&a[j]);
      
    
  
}


/*���k�̏������*/
Student scan_data(){
  Student temp;
  printf("���O :");   scanf("%s",temp.name);
  printf("�g�� :");   scanf("%d",&temp.height);
  printf("�̏d :");   scanf("%f",&temp.weight);
  printf("���w�� :");   scanf("%ld",&temp.schols);
  putchar('\n');
  return temp;
}

int main(){
  int i;
  Student std[NOMBER];
  for(i=0;i<NOMBER;i++){
    std[i]=scan_data();
  }
  
  for(i=0;i<NOMBER;i++){
    printf("%-8s %6d %6.1f %7ld\n",std[i].name,std[i].height,std[i].weight,std[i].schols );
  }
  
  sort_by_height(std,NOMBER);
  
  puts("\n�g�����Ƀ\\�[�g���܂����B");
  for(i=0;i<NOMBER;i++){
    printf("%-8s %6d %6.1f %7ld\r\n",std[i].name,std[i].height,std[i].weight,std[i].schols );
  }
  return 0;
}
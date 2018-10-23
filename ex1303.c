/*　演習13-3　*/
#include <stdio.h>

#define NOMBER_of_students 6

typedef struct {
  char name[64];
  double height,weight;
} Student;

void swap(Student *x,Student *y){
  Student temp=*x;
  *x=*y;
  *y=temp;
}

void sort_by_height(Student date[],int n){
  int i,j;
  for(i=0;i<n-1;i++)
    for(j=n-1;j>i;j--)
      if(date[j-1].height>date[j].height)
        swap(&date[j-1],&date[j]);
}

int main(){
  FILE *fp;
  Student std[NOMBER_of_students];
  int i;
  
  if((fp=fopen("hw.dat","r"))==NULL){
    printf("\aファイルをオープンできません。\n");
  }
  else{
    for(i=0;i<NOMBER_of_students;i++){
      fscanf(fp,"%s%lf%lf",std[i].name,&std[i].height,&std[i].weight);
    }
    sort_by_height(std,NOMBER_of_students);
    
    for(i=0;i<NOMBER_of_students;i++)
      printf("%-20s %5.1f %5.1f \n",std[i].name,std[i].height,std[i].weight);
    
    fclose(fp);
  }
  return 0;
}
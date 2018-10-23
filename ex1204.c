/*　演習12-4　*/
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

/*バブルソートを使って身長昇順*/
void sort_by_height(Student a[],int n){
  int i,j;
  
  for(i=0;i<n-1;i++)
    for(j=n-i;j>i;j--)
      if(a[j-1].height > a[j].height)
        swap_Student(&a[j-1],&a[j]);
      
    
  
}


/*生徒の情報を入力*/
Student scan_data(){
  Student temp;
  printf("名前 :");   scanf("%s",temp.name);
  printf("身長 :");   scanf("%d",&temp.height);
  printf("体重 :");   scanf("%f",&temp.weight);
  printf("奨学金 :");   scanf("%ld",&temp.schols);
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
  
  puts("\n身長順にソ\ートしました。");
  for(i=0;i<NOMBER;i++){
    printf("%-8s %6d %6.1f %7ld\r\n",std[i].name,std[i].height,std[i].weight,std[i].schols );
  }
  return 0;
}
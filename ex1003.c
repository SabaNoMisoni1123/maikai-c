/*�@���K10-3�@*/
#include <stdio.h>
/*2�̃I�u�W�F�N�g�̒l�������i�葱���j*/
void swap(int *n1, int *n2){
  int temp=*n1;
  *n1=*n2;
  *n2=temp;
}

void sort2(int *n1,int *n2){
  if(*n1>*n2)
    swap(n1,n2);
}

void sort3(int *n1,int *n2,int *n3){
  sort2(n1,n2);
  sort2(n2,n3);
  sort2(n1,n2);
}

int main(void){
  int a,b,c;
  puts("������3���́B");
  printf("���� :");   scanf("%d",&a);
  printf("���� :");   scanf("%d",&b);
  printf("���� :");   scanf("%d",&c);
  
  sort3(&a,&b,&c);
  puts("�\\�[�g����");
  printf("%d\n%d\n%d\n",a,b,c);
  
  return 0;
}


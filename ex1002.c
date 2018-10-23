/*�@���K10-2�@*/
#include <stdio.h>
enum month {january=1,feburuary,march,april,may,june,july,august,september,october,november,december};

/*�O���ɂ���*/
void decrement_date(int *y,int *m,int *d){
  if(*d!=1)
    (*d)--;
  else{
    if(*m==1){
      (*y)--;
      *m=12;
    }
    else
      (*m)--;
    
    switch(*m){
      case feburuary :
      if(*y%400==0)
        *d=29;
      else if(*y%100==0)
        *d=28;
      else
        *d=29;
      break;
      
      case april :
      case june :
      case september :
      case november :
      *d=30;
      break;
      
      default :
        *d=31;
    }
  }
}

/*�����ɂ���*/
void increment_date(int *y,int *m,int *d){
  int limit;
  switch(*m){
    case feburuary :
    if(*y%400==0)
      limit=29;
    else if(*y%100==0)
      limit=28;
    else if(*y%4==0)
      limit=29;
    else
      limit=28;
    break;
    
    case april :
    case june :
    case september :
    case november :
    limit=30;
    break;
    
    default :
    limit=31;
    break;
  }
  
  if(*d!=limit)
    (*d)++;
  else{
    if(*m==december){
      (*y)++;
      *m=1;
      *d=1;
    }
    else{
      (*m)++;
      *d=1;
    }
  }
}

/*���ۂɑ��݂�����Â��Ȃ̂��𔻒�*/
int date_exist(int y,int m,int d){
  int judge=0;
  if(y>=0){
    if(m>=1 && m<=12){
      if(d>0){
        int limit;
        switch(m){
          case feburuary :
          if(y%400==0)
            limit=29;
          else if(y%100==0)
            limit=28;
          else if(y%4==0)
            limit=29;
          else
            limit=28;
          break;
    
          case april :
          case june :
          case september :
          case november :
          limit=30;
          break;
    
          default :
          limit=31;
          break;
        }
        if(d<=limit)
          judge=1;
      }
    }
  }
  return judge;
}

int main(void){
  int y,m,d,select;
  puts("�D���ȓ��t����͂��Ă��������B");
  while(1){
    printf("���� :");   scanf("%d",&y);
    printf("���@ :");   scanf("%d",&m);
    printf("���@ :");   scanf("%d",&d);
    
    if(date_exist(y,m,d))
      break;
    printf("\a���̂悤�ȓ��t�͑��݂��܂���B\n\n");
  }
  
  do{
    puts("������\\���c�P�@�O����\\���c�O");
    printf("���� :");  scanf("%d",&select);
  }while(select!=1 && select!=0);
  
  switch(select){
    case 1 :
    increment_date(&y,&m,&d);
    printf("������ :%d�N%2d��%2d��",y,m,d);
    break;
    
    case 0 :
    decrement_date(&y,&m,&d);
    printf("�O���� :%d�N%2d��%2d��",y,m,d);
    break;
  }
  
  return 0;
}
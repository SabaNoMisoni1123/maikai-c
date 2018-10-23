/*　演習10-2　*/
#include <stdio.h>
enum month {january=1,feburuary,march,april,may,june,july,august,september,october,november,december};

/*前日にする*/
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

/*翌日にする*/
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

/*実際に存在する日づけなのかを判定*/
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
  puts("好きな日付を入力してください。");
  while(1){
    printf("西暦 :");   scanf("%d",&y);
    printf("月　 :");   scanf("%d",&m);
    printf("日　 :");   scanf("%d",&d);
    
    if(date_exist(y,m,d))
      break;
    printf("\aそのような日付は存在しません。\n\n");
  }
  
  do{
    puts("翌日を表\示…１　前日を表\示…０");
    printf("入力 :");  scanf("%d",&select);
  }while(select!=1 && select!=0);
  
  switch(select){
    case 1 :
    increment_date(&y,&m,&d);
    printf("翌日は :%d年%2d月%2d日",y,m,d);
    break;
    
    case 0 :
    decrement_date(&y,&m,&d);
    printf("前日は :%d年%2d月%2d日",y,m,d);
    break;
  }
  
  return 0;
}
/*　演習12-5　*/
#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))
#define Lengs_per_l 10    /*燃費*/

/*点を表す構造体*/
typedef struct {
  double x;
  double y;
} Point;

/*自動車を表す構造体*/
typedef struct {
  Point pt;
  double fuel;
} Car;

/*2点間の距離*/
double distance_of(Point pa,Point pb){
  return sqrt( sqr(pa.x-pb.x) + sqr(pa.y-pb.y) );
}

/*車の諸情報*/
void car_info(Car c){
  printf("現在地：(%.3f,%.3f)\n",c.pt.x,c.pt.y);
  printf("残り燃料：%.3fリットル\n",c.fuel);
  printf("燃費：1リットル当たり%dキロ\n",Lengs_per_l);
}

/*車の移動(絶対移動)*/
int move1(Car *c,Point dest){
  double d=distance_of(c->pt,dest);   /*移動距離を出しておく*/
  if(d > Lengs_per_l * (c->fuel) )
    return 0;   /*移動可能距離を越えていたら移動せず０を返して終了*/
    
    c->pt=dest;
    c->fuel -= (d/Lengs_per_l);   /*移動可能ならば位置、燃料を変更*/
    return 1;   /*移動成功は１を返す*/
}

/*車の移動(相対移動)*/
int move2(Car *c,Point dest){
  Point origin={0,0};   /*相対移動のため、原点を用意*/
  if( distance_of(origin,dest) > Lengs_per_l * (c->fuel) )
    return 0;
  
  c->pt.x += dest.x;
  c->pt.y += dest.y;
  
  c->fuel -= (distance_of(origin,dest) / Lengs_per_l );
  
  return 1;
}

int main(){
  Car mycar={{0.0,0.0},100.0};
  
  while(1){
    int select;
    Point dest;
    
    car_info(mycar);
    
    puts("絶対移動...１　相対移動...２　移動しない...３");
    printf("入力 :");   scanf("%d",&select);
    
    if(select!=1 && select!=2)
      break;
    
    puts("移動先について");
    printf("x座標 :");    scanf("%lf",&dest.x);
    printf("y座標 :");    scanf("%lf",&dest.y);
    
    putchar('\n');    /*見た目用*/
    
    if(select==1){
      if(move1(&mycar,dest)==0)
        printf("\a燃料不足\n");
    }
    else{
      if(move2(&mycar,dest)==0)
        printf("\a燃料不足\n");
    }
  }
  
  
  
  return 0;
}
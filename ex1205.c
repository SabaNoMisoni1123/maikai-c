/*�@���K12-5�@*/
#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))
#define Lengs_per_l 10    /*�R��*/

/*�_��\���\����*/
typedef struct {
  double x;
  double y;
} Point;

/*�����Ԃ�\���\����*/
typedef struct {
  Point pt;
  double fuel;
} Car;

/*2�_�Ԃ̋���*/
double distance_of(Point pa,Point pb){
  return sqrt( sqr(pa.x-pb.x) + sqr(pa.y-pb.y) );
}

/*�Ԃ̏����*/
void car_info(Car c){
  printf("���ݒn�F(%.3f,%.3f)\n",c.pt.x,c.pt.y);
  printf("�c��R���F%.3f���b�g��\n",c.fuel);
  printf("�R��F1���b�g��������%d�L��\n",Lengs_per_l);
}

/*�Ԃ̈ړ�(��Έړ�)*/
int move1(Car *c,Point dest){
  double d=distance_of(c->pt,dest);   /*�ړ��������o���Ă���*/
  if(d > Lengs_per_l * (c->fuel) )
    return 0;   /*�ړ��\�������z���Ă�����ړ������O��Ԃ��ďI��*/
    
    c->pt=dest;
    c->fuel -= (d/Lengs_per_l);   /*�ړ��\�Ȃ�Έʒu�A�R����ύX*/
    return 1;   /*�ړ������͂P��Ԃ�*/
}

/*�Ԃ̈ړ�(���Έړ�)*/
int move2(Car *c,Point dest){
  Point origin={0,0};   /*���Έړ��̂��߁A���_��p��*/
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
    
    puts("��Έړ�...�P�@���Έړ�...�Q�@�ړ����Ȃ�...�R");
    printf("���� :");   scanf("%d",&select);
    
    if(select!=1 && select!=2)
      break;
    
    puts("�ړ���ɂ���");
    printf("x���W :");    scanf("%lf",&dest.x);
    printf("y���W :");    scanf("%lf",&dest.y);
    
    putchar('\n');    /*�����ڗp*/
    
    if(select==1){
      if(move1(&mycar,dest)==0)
        printf("\a�R���s��\n");
    }
    else{
      if(move2(&mycar,dest)==0)
        printf("\a�R���s��\n");
    }
  }
  
  
  
  return 0;
}
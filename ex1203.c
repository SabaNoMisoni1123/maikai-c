/*Å@ââèK12-3Å@*/
#include <stdio.h>
typedef struct ex1203 {
  int x;
  long y;
  double z;
} XYZ;

XYZ scan_xyz(){
  XYZ temp;
  
  printf("x :");  scanf("%d",&temp.x);
  putchar('\n');
  printf("y :");  scanf("%ld",&temp.y);
  putchar('\n');
  printf("z :");  scanf("%lf",&temp.z);
  
  return temp;
}

int main(){
  XYZ xyz=scan_xyz();
  
  printf("x=%d y=%ld z=%lf\n",xyz.x,xyz.y,xyz.z);
  
  return 0;
}

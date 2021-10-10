#include <stdio.h>
int main(void){
  int d, v1, v2, v=0 ;
  
  printf("目的地までの距離d[km]:");
  scanf("%d", &d);
  printf("往路の移動速度v1[km/h]:");
  scanf("%d", &v1);
  printf("復路の移動速度v2[km/h]:");
  scanf("%d", &v2);
  
  v= 2*d/(d/v1+d/v2);
  printf("往復での平均移動速度v[km]:%d" ,v);
  
  return 0;
}

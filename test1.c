#include <stdio.h>

int main(){
  int v;
  scanf("%d",&v);
  if(v>60){
    printf("Speed: %d - Speeding\n",v);
  }else{
    printf("Speed: %d - OK\n",v);
    }
  return 0;
  }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
  int y[2];
  int t = 0;

  printf("Rolling dice...\n");
  srand(time(NULL));
  for(int i = 0; i < 2; i++){
    
    y[i] = rand() % 6;
    printf("Die %d: %d\n",i + 1,y[i]);
    t += y[i];
  }
  
  printf("Total value: %d\n",t);

  if( t > 7 ){
    printf("You won\n");
  }else{
    printf("You lost\n");
  }
}

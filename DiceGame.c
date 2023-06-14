#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
  int y[2];
  int t = 0;
  char str[15];

  printf("What is your name?\n");
  printf("> ");
  scanf("%s",str);
  printf("Hello, %s!\n",str);
  printf("Rolling dice...\n");
  srand(time(NULL));
  for(int i = 0; i < 2; i++){
    
    y[i] = rand() % 6;
    printf("Die %d: %d\n",i + 1,y[i]);
    t += y[i];
  }
  
  printf("Total value: %d\n",t);  
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 3

int main(){

  int forest[SIZE];
  int sum=0,i=0;

  srand(time(NULL));

 loop:
  
  for(int x=0;x<SIZE;x++){
    forest[x]=rand()%20+1;
    printf("%d",forest[x]);
    if(x!=SIZE-1){
      putchar(',');
    }else{
      printf("\n");
    }
  }

  for(int y=0;y<SIZE-1;y++){
    if(forest[y]<forest[y+1]){
      i++;
      goto loop; 
    }
  }

  printf("%d回\n",i);
  return 0;
}

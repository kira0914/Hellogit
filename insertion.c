#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define SIZE 50

int main(){

  int a[SIZE];
  int sum;

  srand(time(NULL));
  
  for(int x=0;x<SIZE;x++){
    a[x]=rand()%100+1;
    printf("%d\n",a[x]);
  }

  clock_t start,end;
  start = clock();

  for(int y=0;y<SIZE;y++){
    for(int z=0;z<SIZE-1;z++){
      if(a[z]<a[z+1]){
	sum=a[z];
	a[z]=a[z+1];
	a[z+1]=sum;
      }
    }
  }
  
    end = clock();

  printf("%f秒かかりました｡\n",(double)(end-start)/CLOCKS_PER_SEC);
 

  for(int n=0;n<SIZE;n++){
    printf("%d\n",a[n]);
  }
 
 return 0;
}
     
      
	

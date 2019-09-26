#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define SIZE 50

int main (){

  int a[SIZE];
  int mike;

  srand(time(NULL));
  
  for(int x=0;x<SIZE;x++){
    a[x]=rand()%100+1;
    printf("%d\n",a[x]);
  }

  clock_t start,end;
  start = clock();
  
  for(int x=0;x<SIZE;x++){
    for(int y=0;y<SIZE-1;y++){
      if(a[y]<a[y+1]){
	mike=a[y];
	a[y]=a[y+1];
	a[y+1]=mike;
      }
    }
  
     for(int y=-1;y>1;y--){
       if(a[y]>a[y-1]){
	 mike=a[y];
	 a[y]=a[y-1];
	 a[y-1]=mike;
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

  

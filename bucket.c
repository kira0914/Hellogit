#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define SIZE 50

int main (){

  int i;
  int a[SIZE];
  int b[101];

  srand(time(NULL));
  
  for(int x=0;x<SIZE;x++){
    a[x]=rand()%100+1;
    printf("%d\n",a[x]);
  }

  clock_t start,end;
  start = clock();
  
  for(int y=0;y<101;y++){
    b[y]=0;
  }

  for(int z=0;z<SIZE;z++){
    for(int n=0;n<101;n++){
      if(a[z]==n){
	b[n]++;
      }
    }
  }

  end = clock();

  printf("%f秒かかりました｡\n",(double)(end-start)/CLOCKS_PER_SEC);
  

  for(int m=0;m<101;m++){
    if(b[m]>0){
      for(int c=0;c<b[m];c++){
	printf("%d\n",m);
      }
    }
  }

  
  return 0;
}

  

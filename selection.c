#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 50

int main (){
  
  int a[SIZE];
  int z=0,i=0;

  srand(time(NULL));

  for(int x=0;x<SIZE;x++){
    a[x]=rand()%100+1;
    printf("%d\n",a[x]);
  }

  
  clock_t start,end;
  start = clock();
  
  for(int m=0;m<SIZE;m++){
    for(int y=0+m;y<SIZE;y++){
      if(z<=a[y]){
	z=a[y];
	i=y;
      }
    }
    a[i]=a[m];
    a[m]=z;
    z=0;
  }
  
  end = clock();

  printf("%f秒かかりました｡\n",(double)(end-start)/CLOCKS_PER_SEC);
  

  for(int l=0;l<SIZE;l++){
    printf("%d\n",a[l]);
  }

  return 0;
}
   
      
    

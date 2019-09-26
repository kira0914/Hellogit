#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 50



void bsort(int a[],int n){

  int i,j;

  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j--){
      if(a[j-1]>a[j]){
	int temp = a[j];
	a[j] = a[j - 1];
	a[j - 1] = temp;
      }
    }
  }
}

int main(){

  int x[SIZE];
  
  srand(time(NULL));

  for(int y=0;y<SIZE;y++){
    x[y]=rand()%100+1;
    printf("%d\n",x[y]);
     }

    clock_t start,end;
  start = clock();

  bsort(x,SIZE);

  end = clock();

  printf("%f秒かかりました｡\n",(double)(end-start)/CLOCKS_PER_SEC);

  for(int z=0;z<SIZE;z++){
    printf("%d\n",x[z]);
  }


  return 0;
}
  

  

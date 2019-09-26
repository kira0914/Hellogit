#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 50

void randam(int a[]){

  printf("ソート前");
  for(int x=0;x<SIZE;x++){
    a[x]=rand()%100+1;
    printf("%d",a[x]);
    if(x!=SIZE-1){
      putchar(',');
    }else{
      printf("\n");
    }
  }
}

void swap (int *x, int *y) {
  int temp;    

  temp = *x;
  *x = *y;
  *y = temp;
}


int pivotmake(int a[],int pivot){
  int x1,x2,x3,max,min;

  x1=rand()%SIZE;
  printf("候補１＝%d %d番\n",a[x1],x1);
 loop1:
  x2=rand()%SIZE;
  if(x1==x2||a[x1]==a[x2]){
    goto loop1;
  }
  printf("候補２＝%d %d番\n",a[x2],x2);
 loop2:
  x3=rand()%SIZE;
  if(x1==x3||x2==x3||a[x1]==a[x3]||a[x2]==a[x3]){
    goto loop2;
  }
  printf("候補３＝%d %d番\n",a[x3],x3);

  max=a[x1];
  if(a[x2]>max){
    max=a[x2];
  }if(a[x3]>max){
      max=a[x3];
    }
  printf("max=%d\n",max);
  min=a[x1];
  if(a[x2]<min){
    min=a[x2];
  }if(a[x3]<min){
      min=a[x3];
    }
  printf("min=%d\n",min);
    for(int x=0;x<SIZE;x++){
      if(max!=a[x]){
	if(min!=a[x]){
	  if(a[x1]==a[x]||a[x2]==a[x]||a[x3]==a[x]){
	    pivot=x;
	    printf("基準値＝%d\n",a[pivot]);
	    printf("番号＝%d\n",pivot);
	    break;
	  }
	}
      }
    }
    return pivot;
}

int partition (int array[], int left, int right) {
  int i, j, pivot;
  i = left;
  j = right+1;
  pivot = left;   

  do {
    do { i++; } while (array[i] > array[pivot]);
    do { j--; } while (array[pivot] > array[j]);
    
    if (i < j) { swap(&array[i], &array[j]); }
  } while (i < j);

  swap(&array[pivot], &array[j]);  

  return j;
}





void quick_sort(int a[],int left, int right) {
  int  pivot=0;

  if (left < right) {
    pivot = partition(a, left, right);
    quick_sort(a, left, pivot-1);   
    quick_sort(a, pivot+1, right);
  }
}

void quick1(int a[],int pivot,int left,int right){

  int PIVOT=0,i,j,m=0;

  
  i=left;
  j=right;
  PIVOT=a[pivot];
  printf("%d\n",PIVOT);
  while(i!=j+1){
    if(PIVOT>a[i]){
      if(PIVOT<a[j]){
	  int sum=0;
	  sum=a[j];
	  a[j]=a[i];
	  a[i]=sum;
	}else{
	  --j;
	}
    }else{
      i++;
    }
  }

  swap(&a[pivot], &a[j]);  

  printf("%d %d\n",i,j);
  quick_sort(a,left,i);
  quick_sort(a,j+1,right);
  
  
  
}

void output(int a[]){
  printf("ソート後");
  for(int x=0;x<SIZE;x++){
    printf("%d",a[x]);
    if(x!=SIZE-1){
      putchar(',');
    }else{
      printf("\n");
    }
  }

}

int main (){

  int a[SIZE],pivot=0,left=0,right=SIZE-1;

  srand(time(NULL));

  randam(a);

  quick1(a,pivotmake(a,pivot),left,right);
  
  output(a);
  
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int st[8];
  int i=0,x=0;

  srand(time(NULL));

  
  while(i==0&&x<100000000001){
    for(int x=0;x<5;x++){
      st[x]=rand()%16+3;
    }
    for(int x=5;x<7;x++){
      st[x]=rand()%11+8;
    }

    st[7]=rand()%16+6;
    
    for(int x=0;x<8;x++){
      printf("%d\n",st[x]);
    }

    printf("\n");
    
    if(st[2]==18){
      if(st[3]==18){
	if(st[4]==18){
	  if(st[6]==18){
	    if(st[7]==21){
	      i++;
	    }
	  }
	}
      }
    }
    x++;
  }
  printf("STR=%d\n",st[0]);
  printf("CON=%d\n",st[1]);
  printf("POW=%d\n",st[2]);
  printf("DEX=%d\n",st[3]);
  printf("APP=%d\n",st[4]);
  printf("SIZ=%d\n",st[5]);
  printf("INT=%d\n",st[6]);
  printf("EDU=%d\n",st[7]);
  printf("%d回\n",x);
  return 0;
}

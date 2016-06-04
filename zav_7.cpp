#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char*argv[]){
 int pershe[10], vtoroe[10], i, skalar=0;
	
 srand (time(0));
	
 for (i = 0; i<10; i++){
 pershe[i]=rand()%100;
 vtoroe[i]=rand()%100;
 printf("pershe[%d] = %d\n",i, pershe[i]);
 printf ("vtoroe[%d] = %d\n",i, vtoroe[i]);
	}
 for(i=0; i<10;i++){
 skalar+=pershe[i]*vtoroe[i];
	
	}
 printf("Skalar=%d\n", skalar);
 return 0;
}

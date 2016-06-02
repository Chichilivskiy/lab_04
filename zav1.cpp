#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int prover (int * mas, int i);
int main (){
 int massiv [15];
 int i;
 srand(time(0));
 for (i=0; i<16;){
 massiv[i] = rand () % 16;
 if (prover (massiv, i))
 i++;
		}
 for (i=0; i<16; i++)
 printf("mas[%d] = %d\n", i, massiv[i]);
		
 return 0;
}
int prover (int * mas, int i)
{int j;
for (j=0; j<i; j++ ){
 if (mas[i]==mas[j])
 return 0;
	}
 return 1;
}

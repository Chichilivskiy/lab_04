#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max_rand(int *mas);


int main(int argc, char *argv[]) {
	int mas[10], i, max, minae, nomer;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i] = rand()%100;
		printf("mas[%d] = %d\n", i, mas[i]);
	}
	
	nomer = max_rand(mas);
	minae = mas[0];
	mas[0] = mas[nomer]; 
	mas[nomer] = minae;
	
	for(i = 0; i < 10; i++){
		printf("mas[%d] = %d\n", i, mas[i]);
	}
	
	return 0;
}

int max_rand(int *mas){
	int i, maxele = 0, max; 
	max = mas[0];
	
	for(i = 0; i < 10; i++){
		if(mas[i] >= max){
			max = mas[i];
			maxele = i;
		}
		
	}
	return maxele;
}

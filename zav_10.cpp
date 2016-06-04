#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void vuvyod(int *mas, int n);
int max_znach(int *mas, int n);

int main(int argc, char *argv[]){
	int mas[SIZE], i, k;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand()%100;
	
	vuvyod(mas, SIZE);
	
	k = max_znach(mas, SIZE);
	
	printf("\nMaxcimalne znach: %d\n\n", mas[k]);
	
	for(i = k; i < (SIZE - 1); i++)
		mas[i] = mas[i + 1];
	
	vuvyod(mas, SIZE - 1);
	
	system("pause");
	return 0;	
}

void vuvyod(int *mas, int n){
	int i;
	
	for(i = 0; i < n; i++) 
		printf("\tmas[%d] = %d\n", i, mas[i]);
}

int max_znach(int *mas, int n){
	int i, k;
	int max = mas[0];
	
	for(i = 0; i < n; i++)
		if(mas[i] > max) {
			max = mas[i];
			k = i;
		}	
		
	return k;	
}

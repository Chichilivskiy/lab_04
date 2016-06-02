#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
 int i, d = 0, v = 0;
 int mas [20];
 srand(time(0));
 for (i = 0; i < 20; i++){
 mas[i] = rand()%30 - 10;
 printf("mas[%d] = %d", i, mas[i]);
	}
 for (i = 0; i < 20; i++){
 if(mas[i] > 0)
 d++;
		
 if(mas[i] < 0)
 v++;
	}
 printf("Kilkist dodatnih: %d", d);
 printf("Kilkist videmnuh: %d", v);
 system("pause");
 return 0;
}

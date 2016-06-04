#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int poshyk(char *mas, char bykv);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 char mas[100]; 
 int i, zn;
 char bykv;
	
 srand(time(0));
	
 for(i = 0; i < 20; ){
 mas[i] = rand()%57 + 65;
 if((mas[i] > 90) && (mas[i] < 97)){
 continue;
 } else {
 i++;
		}
	}
	
 for (i = 0; i < 20; i++)
 printf("mas[%d] = %c\n", i, mas[i]);
	
 printf("Vvedite bykvy:");
 scanf("%c", &bykv);
 printf("Vasha bykva e v takuh elementah:");
 zn=poshyk(mas, bykv);
 printf("\nVasha bykva v elementah masiva %d", zn);
	
	
 return 0;
}

int poshyk(char *mas, char bykv){
 int i, zn=0;
	
 for(i = 0; i < 20; i++){
 if(mas[i] == bykv){
 printf("%d, ", i);
 zn++;
		}
	}
 return zn;
}

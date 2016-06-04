#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])  
{	int a[20], b[20], i,j;
	srand(time(0));
	for (i=0;i<20;i++){
   	a[i]=rand()%35;
      printf("mas[%d]=%d\n",i,a[i]);
   }
   printf("\n\n");

	for (i=0;i<20;i++){
   	b[i]=rand()%35;
      printf("\tmas[%d]=%d\n",i,b[i]);
   }
      printf("\n\n");
      printf("Peresechenie:\n");
  
   for( i=0; i<20; i++)
   {
      for( j=0; j<20; j++)
      {
         if(a[i]==b[j])
         {
            printf("mas[%d]=%d\n ",i,a[i]);
            break;
         }
      }
   }
  system("pause");
  return 0;
}

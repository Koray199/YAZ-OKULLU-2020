#include <stdio.h>
int main(){
	int gir;
	int star;
	int empt;
	scanf("%d", &gir);
	
	star = 3;
	empt = gir*2-2;
	
	for(int i=0; i<gir; i++){
		for(int j=0; j<empt; j++){
			printf(" ");
		}
		for(int j=0; j<star;j++){
			printf("*");
		}
		printf("\n");
		empt=empt-2;
		star += 4;
	}
   	for (int i = gir-1; i >= 1; --i) {
      for (int j = 1; j <= i; ++j) {
         printf("*");
      }
      for (empt = 0; empt < gir - i; ++empt)
         printf("  ");
      for (int j = i; j <= 2 * i - 1; ++j)
         printf("*");
      for (int j = 0; j < i - 1; ++j)
         printf("*");

		for(int j=0; j<empt; j++){
			printf("  ");
		}
   	 for(int j = 0; j < i; j++){
   			if(j == gir)
    		break;
   			printf("*");
  		}
  
      printf("\n");
   }
   return 0;
}

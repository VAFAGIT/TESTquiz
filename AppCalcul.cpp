# include <stdio.h>

int main(){
	
	int chx;
	float x, y, rlt;
	
	printf("\t \t *******HELLO*******");
	
	printf("\n \n \t 1-Addition \n");
	printf("\t 2-Soustraction \n ");
	printf("\t 3-Multiplication \n");
	printf("\t 4-Division");
	
	printf("\t \n X = \n");
	scanf("\t \t %f", &x);
	printf("\t enter voter choix \n");
	scanf("\t \t %d", &chx);
	printf("\t \n Y = \n");
	scanf("\t \t %f", &y);
	printf("\n \t \t");
	 
	switch (chx){
		case 1 :
			printf("RLT : %f \n", x + y);
		break;
		
		case 2 :
			printf("RLT : %f \n", x - y);
		break;
		
		case 3 : 
			printf("RLT : %f \n", x * y);
		break;
		 case 4 :
		 	if ( y == 0 ){
		 		printf("Non divisable par zero");
			 }
			else{
				printf("RLT : %f", x / y);
			} 
			break ;
			default :
				printf("ERROR \n");
			break;
		
		
	}

}
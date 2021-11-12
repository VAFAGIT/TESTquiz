# include <stdio.h>

int main(){
	
	int chx1, chx2;
	float x, y, rlt;
	
	printf("\t \t *******HELLO*******");
	
	printf("\n \n \t 1-Addition \n");
	printf("\t 2-Soustraction \n ");
	printf("\t 3-Multiplication \n");
	printf("\t 4-Division");
	
	printf("\t \n X = \t");
	scanf("\t \t %f", &x);
	printf("\t \n enter voter choix \t");
	scanf("\t \t %d", &chx1);
	printf("\t \n Y = \t");
	scanf("\t \t %f", &y);
	printf("\n \t \t");
	 
	switch (chx1){
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
	int a, b;
        
        printf("oppe AND \n");
        printf("enter le premier nomber \t \n ");
        
		printf("enter le deuxieme nomber \t \n");
		scanf("%d %d", &a ,&b);
		
		if( (a== 0 || b==0)&&(a== 1  || b== 1);(a&&b == 1))
		 {
			printf("RLT = 1") ;
		}
		else if(a&&b == 1) {
			printf("RLT = 0");
		}
	
		else{
			printf("choix invalide");
		}
		
		
			int a1, b1;
        
        printf("\n\t oppe AND \n");
        printf("enter le premier nomber \t \n ");
        
		printf("enter le deuxieme nomber \t \n");
		scanf("%d %d", &a1 ,&b1);
		
		if( (a1== 0 || b1==0)&&(a1== 1  || b1== 1);(a1||b1 == 1 ))
		 {
			printf("RLT = 1") ;
		}
		else if(a1||b1 == 0) {
			printf("RLT = 1");
		}
	
		else{
			printf("choix invalide");
		}
		
return 0 ;	
}
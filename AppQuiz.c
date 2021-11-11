# include <stdio.h>

int main ()
{
	
	int chx1, chx2, chx3, chx4, chx5;
	int SCORE ;
	
	printf("\t \t ******* BIENVENU ******* \n");
	printf("\t \t \t \n");
	
	printf("\t QUESTION N:1 (5pts) \n");
	printf("A= 2(2+4) =\n");
	printf("choix N:1 A = 12 \n");
	printf("choix N:1 A = 21 \n");
	printf("choix N:1 A = 5 \n ");
	scanf("%d", &chx1);
	
		int Not = 0;
	                  if ( chx1 == 12 ){
	                	Not+=5  ;
	                	printf ( "true");
           	}
	               else {
	             	Not-- ;
	             	printf("false");
	             	Not == 0;
					   if ( SCORE == 0) return  0 ;
                   	}
        
   
   	  
   	 SCORE = Not;
   	
   		printf("\n \t QUESTION N: 2 (5pts) \n");
	printf("B= (3+4)(2+8) =\n");
	printf("choix N:1 B = 61 \n");
	printf("choix N:1 B = 64 \n");
	printf("choix N:1 B = 65 \n ");
	scanf("%d", &chx2);
   	
   		 
	                  if ( chx2 == 64 ){
	                	Not+=5  ;
	                	printf ( "true \n");
           	}
	               else {
	             	Not-- ;
	             	printf("false \n");
	             		Not == 0;
					  if ( SCORE == 0) return  0 ;
                   	}
   SCORE = Not ;
   
   	printf("\n \t QUESTION N: 3 (5pts) \n");
	printf("C= 3(5+1) =\n");
	printf("choix N:1 C = 13 \n");
	printf("choix N:1 C = 16 \n");
	printf("choix N:1 C = 18 \n ");
	scanf("%d", &chx3); 
	
	
	     if ( chx3 == 18 ){
	                	Not+=5  ;
	                	printf ( "true \n");
           	}
	               else {
	             	Not-- ;
	             	printf("false \n");
	             		Not == 0;
				 if ( SCORE == 0) return  0 ;
                   	}
   
	SCORE = Not ;
   	 
	printf("\n \t QUESTION N: 4 (5pts) \n");
	printf("D= 3(5+2) =\n");
	printf("choix N:1 D= 13 \n");
	printf("choix N:1 D = 15 \n");
	printf("choix N:1 D = 21 \n ");
	scanf("%d", &chx4);  	
	
	   if ( chx4 == 21 ){
	                	Not+=5  ;
	                	printf ( "true \n");
           	}
	               else {
	             	Not-- ;
	             	printf("false \n");
	             		Not == 0;
				 if ( SCORE == 0) return  0 ;
                   	}
   
	SCORE = Not ;
   	
   	   if ( SCORE == 20 ){
	                	printf("VOTRE SCORE :  %d", SCORE);
	                	printf ( "\n \t tres bien \n");
           	}
	               else if ( SCORE >= 10 ) {
	             	printf("VOTRE SCORE : %d ", SCORE);
	             	printf("\n \t passable \n");
                   	}
                    else{
                    	printf("VOTRE SCORE : %d ", SCORE);
                    	printf("\n \t tres faible");
					}
	return SCORE ;
   }
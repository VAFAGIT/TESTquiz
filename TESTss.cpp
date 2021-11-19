#include <stdio.h>
#include <stdlib.h>
#include <string.h>


	
	typedef struct candidat  {
	  char nom[12];
	  char id; 
	  int score;
	} PL;
	   	
	typedef struct electeur  {
	char id; 
	} EL;
	
	void vote1(electeur EL[], candidat PL[], int nb1, int nb2) {
		int min, max;
		double cal;
		candidat PL1[nb1];
		int chx, i,j,tour1,tour2, tour3,ep,x;
		
		do{
		     i =0;
			tour1 =0;
			printf("\n");
			printf("\n Tour 1");
			printf("\n");
			printf("\n electeur \t %s \t %d \t entrer votre choix ", PL1[i].id);
			scanf("%d",&chx);
			if(chx>0 && chx<=nb1){
			 PL[chx-1].score++;
			 i++;}
			 else {
			 	printf("choix invalide");
			 }
			}while(i <nb2);
			
			cal= nb2*0.15;
			for(j=0;j<nb1;j++){
				
				if(PL1[j].score>=cal){
					
					PL1[tour1]= PL1[j];
					tour1++;
				}
			}
			
			for(j=0; j<tour1;j++){
				printf("les candidat selectioner pour le tour 1 : %s\t %d \n" ,PL[j].id ,PL[j].score);
			}
			
			eq = PL1[0].score;
			for(x= 0;x<nb1;x++){
				if(eq != PL1[i].score){
				
				
				}
			}
			
			
			
	   void vote2(electeur EL[], candidat PL[], int nb1, int nb2) {
		int min, max;
		double cal;
		candidat PL2[nb1];
		int chx, i,j,tour1,tour2, tour3,ep,x;
		
		do{
		     i =0;
			tour1 =0;
			printf("\n");
			printf("\n Tour 1");
			printf("\n");
			printf("\n electeur \t %s \t %d \t entrer votre choix ", PL1[i].id);
			scanf("%d",&chx);
			if(chx>0 && chx<=nb1){
			 PL[chx-1].score++;
			 i++;}
			 else {
			 	printf("choix invalide");
			 }
			}while(i <nb2);
			
			cal= nb2*0.15;
			for(j=0;j<nb1;j++){
				
				if(PL2[j].score>=cal){
					
					PL2[tour2]= PL2[j];
					tour2++;
				}
			}
			
			for(j=0; j<tour2;j++){
				printf("les candidat selectioner pour le tour 2 : %s\t %d \n" ,PL[j].id ,PL[j].score);
			}
			
			eq = PL2[0].score;
			for(x= 0;x<nb1;x++){
				if(eq != PL2[i].score){
				
				
				}
			}
			
			
			
		}
		
	void vote3(electeur EL[], candidat PL[], int nb1, int nb2) {
		int min, max;
		double cal;
		candidat PL3[nb1];
		int chx, i,j,tour1,tour2, tour3,ep,x;
		
		do{
		     i =0;
			tour1 =0;
			printf("\n");
			printf("\n Tour 1");
			printf("\n");
			printf("\n electeur \t %s \t %d \t entrer votre choix ", PL1[i].id);
			scanf("%d",&chx);
			if(chx>0 && chx<=nb1){
			 PL[chx-1].score++;
			 i++;}
			 else {
			 	printf("choix invalide");
			 }
			}while(i <nb2);
			
			cal= nb2*0.15;
			for(j=0;j<nb1;j++){
				
				if(PL3[j].score>=cal){
					
					PL3[tour3]= PL3[j];
					tour3++;
				}
			}
			
			for(j=0; j<tour3;j++){
				printf("les candidat selectioner pour le tour 3 : %s\t %d \n" ,PL[j].id ,PL[j].score);
			}
			
			eq = PL3[0].score;
			for(x= 0;x<nb1;x++){
				if(eq != PL3[i].score){
				
				
				}
			}
			
			
			
		}
	
		
	
	

int main(){

    int chx;
    int x, y;
    int nb1, nb2;
	   
	struct *PL;
	struct *EL;
	
	printf("\t \t \t Election Presidentielle \t \t \n");
	printf("\t \n ");
	printf (" ");
	printf("");
 
	
		do
	{
	  printf("enter nobre de liste :" );
	  scanf("%d",&nb1);
	}while(nb1<5);
	
	
	
	int *pl = (int*) malloc(nb1 *sizeof(int));
	
	for (int i = 0; i<nb1; i++){
		pl[i]= i+1;
	
	    scanf("%d",&pl[i]);
	    
		}
		for(int i=0; i<nb1;i++){
		printf("pl[%d] \t %d\n",i,pl[i]);
		}
	
	
	
	
		do{
	printf("enter nobre de liste :" );
    scanf("%d",&nb2);
	}while(nb2<10);
	
	
	int *pe = (int*) malloc(nb2 *sizeof(int));
	
   	for (int i = 0; i<nb2; i++){
		pl[i]= i+1;
	    printf("enter id des electeurs [%d]:\n");
      	scanf("%d",&pe[i]);
		}
	
	for(int i=0; i<nb2;i++){
			printf("pe[%d]  \t %d\n",i,pe[i]);
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
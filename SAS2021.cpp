#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int i,j;
   
	char tmp;
//fonction structure de compte boncaire :
  typedef struct comptB{
    char nom[20];
    char prenom[20];
    char CIN[20];
    float solde;
   } CB;
// fonction de saisie 
 void saisie(comptB CB){
	printf("donner le nom : \t",CB.nom);
    scanf("%s",&CB.nom);
    printf("donner le prenom : \t",CB.prenom);
    scanf("%s",&CB.prenom);
    printf("donner  cin : \t",CB.CIN);
    scanf("%s",&CB.CIN);
    printf("donner le solde : \t",CB.solde);
    scanf("%f",&CB.solde);
    printf("\n %s\t %s\t %s\t %f",CB.nom,CB.prenom,CB.CIN,CB.solde);
	};

	// fonction de tri :
	void triS(struct comptB CB[],int size){
	char tmp[20]= {0};
		for (i= 0;i<(size);i++){
				for(j= 0;j<(size-i-1);j++){
					if( strcmp(CB[i].CIN,CB[j].CIN) < 0)
					{
						strcpy(tmp,CB[i].CIN);
						strcpy(CB[i].CIN,CB[j].CIN);
						strcpy(CB[j].CIN,tmp);
					}
				}
		}
	
		for(i=0; i<size;i++){
			printf("%s", CB[i].CIN);
		}
	};


// fonction d'affichage
 void afficher(comptB CB[], int size){
 	int j;
 	printf("\n \n");
 	for(i=0;i<size;i++){
 		printf("\n %s \t %s \t %s \t %f \n",CB[i].nom,CB[i].prenom,CB[i].CIN,CB[i].solde);
	 }
 }




int main(){
	
   struct comptB CB;
	int chxMenu ;
	int nb,cinX;
	float mr,md;
	bool test;
	
	
	strcpy(CB1.nom, "gigi");
	strcpy(CB2.nom, "olaa");
	
	strcpy(CB1.prenom, "hatim");
	strcpy(CB2.prenom, "salema");
	
	strcpy(CB1.CIN, "HH23609");
	strcpy(CB2.CIN, "AA45922");
	
	strcpy(CB1.solde, 11000.00);
	strcpy(CB2.solde, 100.75);
	
	
	
	
	printf("\n \n");
	printf("\t *******Gestion Bancaire*******\n");
	printf("\t 1- Creer un nouveau copmte bancaire\n");
	printf("\t 2- Creer plusieurs copmtes bancaires\n");
	printf("\t 3- Operation \n");
	printf("\t 4- Affichage \n");
	printf("\t 5- Fidelisation \n");
	printf("\t 6- Quitter \n");
	
	printf ("\t \t votre choix ? \t ");
	scanf("%d",&chxMenu);
	
	printf("\n \n");
	
	
	switch (chxMenu){

        case 1 : 
        
          saisie(CB);
       	break;
		
		case 2 :
			printf("Enter le nombre des comptes que vous voullez creer: \t");
			scanf("%d",&nb);
			for(i=0;i<nb;i++){
			saisie(CB);
			}
        break;
            
            
        case 3 :
		    printf("1-RETRAIT");
		    printf("2-DEPOT");
		    printf("enter votre choix \t");
		    scanf("%d",&nb);
		    if (nb==1){
		    	printf("Enter cin et : \t");
		    	scanf("%s",&cinX);
		    	triS(CB,sizeof(CB));
		    	printf("Le montant que vous voullez :\t");
		    	scanf("%f",&mr);
		    	
		    
		    
		    	
			}
				else if (nb==2){
		    		printf("Enter cin et : \t");
		    	    scanf("%s",&cinX);
		    	    triS(CB,sizeof(CB));
		    	    printf("Le montant que vous voullez :\t");
		    	    scanf("%f",&md);
		    	   
				}
				else {
					printf("choix invalide");
				}
				break;
				
				
		case 4 :
				
				
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int i,j;
    
    int s=0;
    int nb;
//fonction structure de compte boncaire :
    struct Compte{
	    char nom[20];
	    char prenom[20];
	    char CIN[20];
	    float solde;
   };
   
 // int comptB = (int)malloc(s *sizeof(int));
   struct Compte Compt[1000] ;
   struct Compte tmp;
   
   void saisie1()
   {
  	 	printf("L'ement d'indice %d\n",s);
   		printf("donner le nom : \t");
        scanf("%s",Compt[s].nom);
        printf("donner le prenom : \t");
        scanf("%s",Compt[s].prenom);
        printf("donner  cin : \t");
        scanf("%s",Compt[s].CIN);
        printf("donner le solde : \t");
        scanf("%f",&Compt[s].solde);
        
        s++;
   }
   //fonction de saisie 
    void saisie(){
    	printf("Enter le nombre des comptes que vous voullez creer: \t");
		scanf("%d",&nb);
	
    	for(i=s;i<nb+s;i++ )
		{
			printf("L'ement d'indice %d\n",i+1);
    		printf("donner le nom : \t",Compt[i].nom);
            scanf("%s",&Compt[i].nom);
            printf("donner le prenom : \t",Compt[i].prenom);
            scanf("%s",&Compt[i].prenom);
            printf("donner  cin : \t",Compt[i].CIN);
            scanf("%s",&Compt[i].CIN);
            printf("donner le solde : \t",Compt[i].solde);
          	scanf("%f",&Compt[i].solde);
          	
		}
		s=s+nb;
	
    
	};
		// fonction d'affichage
   void afficher(){
 	 printf("\n \n");
 	 for(i=0;i<s;i++){
 	 	printf("\n ");
 		printf("\n %s \t %s \t %s \t %f \n",Compt[i].nom,Compt[i].prenom,Compt[i].CIN,Compt[i].solde);
 		printf("\n ");
	 }
}
   // fonction classtri:
   void classtri(){
   	
   		strcpy(tmp.nom,Compt[j].nom);	
					strcpy(tmp.prenom,Compt[j].prenom);	
					strcpy(tmp.CIN,Compt[j].CIN);	
					tmp.solde=Compt[j].solde;
						
						
					strcpy(Compt[j].nom,Compt[j+1].nom);
					strcpy(Compt[j].prenom,Compt[j+1].prenom);
					strcpy(Compt[j].CIN,Compt[j+1].CIN);
					Compt[j].solde=Compt[j+1].solde;
						
					strcpy(Compt[j+1].nom,tmp.nom);
					strcpy(Compt[j+1].prenom,tmp.prenom);
					strcpy(Compt[j+1].CIN,tmp.CIN);
					Compt[j+1].solde=tmp.solde;
   	
   }
	// fonction de tri assd :
   void triCB(){
	

	
		for (i= 0;i<s-1;i++){
				for(j= 0;j<s-i-1;j++){
					if( Compt[j].solde>Compt[j+1].solde)
					{
					classtri();
						}
				}
				
		}
	
		
	}
		// fonction de tri des :
      void triS(){
	

	
		for (i= 0;i<s-1;i++){
				for(j= 0;j<s-i-1;j++){
					if( Compt[j].solde<Compt[j+1].solde)
					{
					classtri();
					
					}
				}
				
		}
	
		
	}
	 //algo de recherch

   int serchCB(){
    char cinX[20];
  	printf("\t Donner le CIN : \t");
  	scanf("%s", cinX);
    for(i=0;i<s;i++){
   	   if( strcmp(cinX, Compt[i].CIN) == 0){
   	   	printf("\n CIN %s existe  .",cinX);
   	   	return i;
		  }
   		
   	    	
	   
	    else {
	    	 printf("CIN %s n existe pas ",cinX);
	    	 return -2;
		}
   	     
       
   }
}
   
   
  
  //fonction fed :
  void fed(){
  	for(i=0; i<3;i++){
  		Compt[i].solde = Compt[i].solde + (Compt[i].solde*1.3/100);
  		
  		printf("\n solde actuelle : %f \n",Compt[i].solde);
	  }
  }
  
  

 int main(){
	
	int chxMenu ;
	int nb,cinX;
	float mr,md,chI;
	
	
	
	
	START :
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
	
	switch( chxMenu ){
		
		  case 1:
		  		{
		  			saisie1();
		  			afficher();
              	    goto START;
				  }; break;
               
                
            
         case 2 :
              saisie();
              afficher();
              goto START;
              break;
              
              
        case 3:  
            {
            	printf("\n 1-RETRAIT\t");
			    printf("\n 2-DEPOT\t");
			    printf("enter votre choix \t");
			    scanf("%d",&nb);
			    if(nb== 1){
		    
	            int cp= serchCB();
	    	    printf("Le montant que vous voullez :\t");
	    	    scanf("%f",&mr);
	    	    if(mr > Compt[cp].solde)
				{
    	         printf("Solde insuffisant pour effectuer cette opperation .");
	    	    }
	            else
				{
					 Compt[s].solde= Compt[s].solde - mr;
		    	      printf("solde actuelle: %f",Compt[s].solde);
	    	       
		        }
		    
		      }
			    
				   else if (nb==2){
		    	    serchCB();
		    	    printf("Le montant que vous voullez :\t");
		    	    scanf("%f",&md);
		    	    Compt[s].solde = Compt[s].solde + md;
		           printf("solde actuelle: %f",Compt[s].solde);
				}
				   else {
					printf("choix invalide");
				}
				
			    	goto START;
		     	};break;
        
        case 4 :
                 	printf("\n1-Afficher par ordre ascendant");
	                printf("\n2-Afficher par ordre descendant");
		            printf("\n3-Afficher les copmt sup par ordre ascendant");
	                printf("\n4-Afficher les copmt sup par ordre descendant");
	                printf("\n5-Recherche pa CIN");
		            printf("\nenter votre choix \t");
		            scanf("%d",&nb);
		            switch( nb ){
		            	
		            	case 1 :
		            		   triCB();
		            		   afficher();
		            		    break;
		            		    
		            	case 2 :
		            	    	triS();
		            	    	afficher();
		            	    	break;
		           	    	
		            	case 3 :
		            		    printf("enter le chI");
		            		    scanf("%f",&chI);
		            		    triCB();
		            		    for(i = 0;i<s;i++){
		            		    	if(chI < Compt[i].solde){
		            		    		printf("\n");
		            		    		printf("\n%s\t %s\t %s \t%f",Compt[i].nom,Compt[i].prenom,Compt[i].CIN,Compt[i].solde);
		            		    		printf("\n");
									}
								}
		            		     break;
		            		    
		            	case 4 :
		            		 printf("enter le chI");
		            		    scanf("%f",&chI);
		            		    triS();
		            		    for(i = 0;i<s;i++){
		            		    	if(chI < Compt[i].solde){
		            		    		printf("\n");
		            		    		printf("\n%s\t %s\t %s \t%f",Compt[i].nom,Compt[i].prenom,Compt[i].CIN,Compt[i].solde);
		            		    		printf("\n");
									}
								}
		            		    break;
		            		    
		            		    
		               case 5 :	
		                       printf("Donner CIN:");
		                       scanf("%s",cinX);
		                        for(i = 0; i<s;i++){
		                     	 if( strcmp(cinX, Compt[i].CIN) == 0)
		                     	{
		                     		printf("\n%s\t %s\t %s \t%f",Compt[i].nom,Compt[i].prenom,Compt[i].CIN,Compt[i].solde);
								 }
								 else {
								 	printf("\n CIN %s existe  .",cinX);
								 }
							 }
		            	
				         	}
			   goto START;
                break;
                    
		case 5 :
			        triS();
			        fed();
			        afficher();
		            goto START;
		        break;
		
		
		
		case 6 : 
		        exit(0) ;
		        break;
		
		
		default :
			    printf("votre choix invalide");
		        goto START;
		       	break;			
					
	}
		
	
		
		
		    
return 0;		

		
	}

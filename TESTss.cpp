#include <stdio.h>
#include <stdlib.h>
#include <string.h>


	
	typedef struct PL {
	  char nom [6];
	  char prenom [6];
	  char id[6]; 
	};
	   	
	typedef struct PE {
	  char nom [10];
	  char prenom [10];
	  int id[10]; 
	};

int main(){
	
 struct PL pl1;
 struct  PL pl2;
 struct PL pl3;
 struct PL pl4;
 struct PL pl5;
 struct PL pl6;
 
    strcpy(pl1.nom, "amrani");
	strcpy(pl2.nom, "ezzarouti");
	strcpy(pl3.nom, "benhima");
	strcpy(pl4.nom, "brahimi");
	strcpy(pl5.nom, "chouaref");
	strcpy(pl6.nom, "benthami");

	
	
	 strcpy(pl1.prenom, "ahmed");
	strcpy(pl2.prenom, "mohamed");
	strcpy(pl3.prenom, "selma");
	strcpy(pl4.prenom, "marouan");
	strcpy(pl5.prenom, "karim");
	strcpy(pl6.prenom, "wassima");
	
	
	strcpy(pl1.id, "A01");
	strcpy(pl2.id, "B02");
	strcpy(pl3.id, "D03");
	strcpy(pl4.id, "S04");
	strcpy(pl5.id, "F05");
	strcpy(pl6.id, "Q06");
	
	int vote ;
	
	printf("\t \t \t Election Presidentielle \t \t \n");
	printf("\t \n ");
    printPL( pl1 );
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
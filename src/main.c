//  Copyright (c) 2018 Antoine Tran Tan
//



#include <userint.h>
#include <ansi_c.h>
#include "my_header.h"





int main(void)
{  			   
    char prenom [20];
	char nom_de_famille [50];
	char annee_de_naissance [100];
	long int age = 0;
	char intro [100];
	
	printf("ecrivez votre prenomn :");
	scanf("%s", prenom);
	
	printf("ecrivez votre nom :");
	scanf("%s", nom_de_famille);
	
	printf("ecrivez votre annee de naissance :");
	scanf("%s", annee_de_naissance);		   ;
	
	printf("ecrivez votre age :");
	scanf("%d", &age);
	
	sprintf(intro," je m'appelle %s %s et j'ai %d ans", prenom,nom_de_famille,age);
	MessagePopup( "phrase",intro);
	
	
	
	

	
    return 0;
}

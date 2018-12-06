//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include <userint.h>
#include "my_header.h"





int main(void)
{
	char ligne1[80] = "Nom: triangle_A";
	char ligne2[80] = "Nb points: 3";
	char ligne3[80] = "Cordonnees: 10 20 30 40 43 53 35 65";
	
	char nom_fig[20];
	long int nb_pts;
	int x[5] = {0,0,0,0,0};
	int y[5] = {0,0,0,0,0};
	char msg[80];
	
	sscanf (ligne1, "%*s %*s", nom_fig);
	sscanf (ligne2, "%*s %*s %d", &nb_pts);
	sscanf (ligne3, "%*s %d %d %d %d %d %d %d %d %d %d", &x[0], &x[1], &x[1], &x[5], &x[7], &y[0], &y[2], &y[5], &y[6], &y[9]);
		  
	sprintf (msg, "La figure %s possede %d sommets", nom_fig, nb_pts);
	MessagePopup ("Rep", msg);
	
    

	
    return 0;
}

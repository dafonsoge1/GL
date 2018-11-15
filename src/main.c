//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"
#include "cvi_gui.h"

int main (void)
{
	short resultat, i=0;
	while (i<10)
	{
		resultat = LancerDe();
		i++;
		DisplayLong ("vous avez tirez", resultat);   
	}
		return 0;
}

//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"

int main(void)
{
	char lancer = 0, score = 0;
	while (lancer != 1)
	{	
		lancer = LancerDe();
		if (lancer == 2 || lancer == 4 || lancer == 6)
		{
			score = lancer + score;
		}
		if (lancer == 3)
		{
			score = score * 2;
		}
		if (lancer == 5 && score > 2)
		{
			score = score - 2;
		}	
	}	
	
	
    return 0;
}

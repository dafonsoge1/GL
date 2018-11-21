#include <ansi_c.h>
#include "my_header.h"
#include "TP_lib.h"



int main (void)
{

		

	unsigned char bin [10] = {10,14,15,16,18,20,22,23,25,28};
	short int d, seuil = 20;
	
	for (d = 0; i<10; i++)
	{
		if(bin[d]>seuil)
		
			bin[d] = 1;
		
	    else 
			bin[d] = 0;
	}
    return 0;
}

int main (void)
{
	short int ale [10];
	short int d;
	short int SEUILH = 200;
	short int SEUILB = -100;
    short int a;
	 for (d=0; d<10 ; d++)
	 {
		 ale[d] = rand()-32767;
		 
		 if(ale[d]>SEUILH)
			 
			 ale[d]=SEUILH;
		 
		 else if (ale [d]<SEUILB)
			 
			 ale[d]= SEUILH;
		     a=ale[d];
	 }
	 
	 return 0;
}

int main (void)
{
	unsigned char dist[10]={23,10,75,123,97,180,207,117,52,2};
	short int  d;
	short int a;
	
	for (d=0; d<10 ;d++)
	{  
		dist[d+1]= fabs(dist[d]-dist[d+1]);
		a= dist[d+1];
		
	}
	return 0;
}

int main (void)
{
	unsigned char a [5]= {7,17,23,25,28};
	unsigned char b [5];
	short int d;
	
	for (d=0;d<5;d++)
	{
		b[d]= a[5-1-d];
		
	}
	
	return 0;
}

int main (void)
{
	unsigned char miroir [8]= {7,17,23,25};
	short int d,a;
	
	for (d=0;d<4;d++)
	{  if(d<1)
		   
		    miroir[d]= miroir[4-1-d];
		   
		
	   else if(d<2)
		   
		    miroir[d]= miroir[4-1-d];
	   
	    else if(d<3)
			
			miroir[d]= miroir[4-1-d];
		
		 else if(d<4)
			 
			 miroir[d]= miroir[4-1-d]; 
	   
			 a=miroir[d];
		
	}
	
	return 0;
	
}	


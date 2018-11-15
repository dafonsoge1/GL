//  Copyright (c) 2018 Antoine Tran Tan
//


#include "stdlib.h"
#include "my_header.h"
#include <math.h>

#define RAND_MAX 32767


int main(void)
{  			   
    int n=1;
	long s1=0;

	int n2=1;
	long s2=0;
	
	long nbalea =((rand())%10)+1 ;    
	long s3 = 0;  
	long n3 = 0;
	
	int m = 1;
	int n4 = 0;
	long s4 = 0;
	
	while (n<11)
	{
		s1 = s1 + 3 * n;
	    n++;
	}
	
	while (s2<9876)
	{
		s2 = s2 + 3 * n2;
		n2++;
		
	}
	
	while (n3 <12)
	{
		s3= s3 + nbalea;
		n3++;
		nbalea = ((rand())%10)+1;
		
	}
	
	while (n4<20)
	{
		if (m%3==0 || m%7==0)
		{
			s4 = s4 + m;
			m = m + 1;
			n4 = n4+1;
			
		}
		else
			m = m+1;
	}   

	
    return 0;
}

#include "math.h" 
main() 
{ 
	int m,i,k,h=0,leap=1; 
	printf("\n"); 
	for(m=1;m<=100;m++)
	{ 
		k=sqrt(m+1);
		for(i=2;i<=k;i++) 
		{    
			if(m%i==0) 
			{
				leap=0;
				break;
			}
		}
		if(leap) 
		{
			printf("%-4d",m);
			h++; 
			if(h%10<=0)  //mutated statement
				printf("\n"); 
		} 
		leap=1; 
	} 
	printf("\nThe total is %d",h); 
}

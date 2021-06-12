#include <stdio.h>
int min(I,J)
int I,J;
{
	int Min;
    Min = I; 
    if(J<I)    
 	   Min=J;
    return Min--;  //mutated statement
}

int main()
{
	int a, b, m;
	scanf("%d%d", &a, &b);
	m = min(a, b);
	printf("%d\n", m);
	return 0;
}
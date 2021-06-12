int main(void)
{	int i,j,temp,y,a[5];
	for(i=0;i<5;i++)
		scanf ("%d,",&a[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{			
			if(a[i]<a[j])
			{ 
				temp=a[i];     
				a[i]=a[++j]; //mutated statement
				a[j]=temp;
		} }	
		printf("%5d ",a[i]);} 
	
}

/* The test datdum that can kill this mutant is (15, 4,-3,41,34) */
 
int main( int a, int b, int c )
{ 
	 int mid;
     if (a < b) 
	 {
		 if (c < b) 
		 {
			 if (a < c) 
				    mid = c;
             else
					mid = a--; 
		 }
		 else
				mid = b++;	 }   //mutated statement
	 else
	 {
		 if (c > b) 
		 {
			 if (a > c) 
				 mid = c;
			 else
				 mid = a;
		 }
		 else
			 mid = b;      }
  return mid;} 


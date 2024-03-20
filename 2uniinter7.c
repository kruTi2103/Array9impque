#include <stdio.h>
int main ()
{
 	int n,c=0; 
 	scanf ("%d",&n);
 	int p[n];
 	int k[n];
 	int r[n+n];
 	printf ("Enter the first Array:\n");
 	for (int i = 0; i < n; i++)
    	{
      	scanf ("%d", &p[i]);
    	}
  	printf ("Enter the second Array:\n");
  	for (int i = 0; i < n; i++)
    	{
     	 scanf ("%d", &k[i]);
    	}
  	for (int i = 0; i < n; i++)
    	{
      	r[c] = p[i];
      	c++;
    	}
  	for (int i =0; i<n; i++)
    	{
	  	r[c] = k[i];
	  	c++;
    	}
    	for (int i = 0; i < n + n; i++)
    	{
      	printf ("%d ", r[i]);
    	}	
    	printf("\n");
    	for(int a=0; a<n+n; a++)
	{
		int count=0;
		for(int b=a+1; b<n+n; b++)
		{
			if (r[a]==r[b])
			{
			count++;
			}
		 }
		  if(count==1)
		  {
		   printf("dupli:-");
		   printf("%d\n",r[a]);
		  }
	}	    
        return 0;
}

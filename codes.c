#include <stdio.h>
int main ()
{
 	int n;
  	scanf("%d",&n);
  	int p[n];
  	int mini;
  	int temp;
  	for (int k=0; k<n; k++)
  	{
   		scanf("%d",&p[k]);
  	}
 	for (int i=0; i<n; i++)
 	{
   		mini = i;
  		for(int j=i+1; j<n; j++)
  		{
   			if (p[j]<p[mini])
   			{		
   				 mini=j;
    				 temp =p[i];
    			         p[i]=p[mini];	
    				 p[mini]=temp;
           		}
  		}
 	}
 	for(int i=0; i<n; i++)
 	{
  		printf("%d",p[i]);
 	}
 return 0;
}

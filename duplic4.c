#include <stdio.h>
int main ()
{
	 int n;
	 scanf("%d",&n);
	 int p[n];
	 int c1=0;
	 for(int i=0; i<n; i++)
	 {
	  scanf("%d",&p[i]);
	 }
	 for(int i=0; i<n; i++)
	 {
	       int c=0;
		  for(int j=i+1; j<n; j++)
		  {
			   if (p[i]==p[j])
			   {
			   	p[i]=0;
			   	p[j]=0;
					c++;
			   }
		  }
		  if(c==1)
		  {
		    c1=c1+1;
		  }
		  
	 }
	 printf("%d ",c1);
	 return 0;
}

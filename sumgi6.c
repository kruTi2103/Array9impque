#include <stdio.h>
int main ()
{
	 int n,s;
	 printf("Enter the size of array :\n");
	 scanf("%d",&n);
	 int p[n];
	 printf("Enter the sum : \n");
	 scanf("%d",&s);
	 printf("Enter the array: \n");
	 for(int i=0; i<n; i++)
	 {
	  	scanf ("%d",&p[i]);
	 }
	 int c=0;
	 for (int i=1; i<n; i++)
	 {
	   		if (p[c]+p[i]==s)
	   		{
				printf("%d %d  ", p[c], p[i]);
	   		}
	   		c++;
	 }
	 return 0;
}

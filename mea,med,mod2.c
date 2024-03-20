#include <stdio.h>
int main ()
{
	 int n, sum=0,max=0;
	 scanf("%d",&n);
	 int p[n];
	 for(int i=0; i<n; i++)
	 {
	  scanf("%d",&p[i]);
	  sum=sum+p[i];
	 }
	 float Mean = sum/n;//float det ahe pn point nantr value nhi det 0 dete
	 printf("The mean of given numbers is %lf\n",Mean);
	 if(n%2==0)
	 {
	  int a=n/2;
	  int sum1=p[a]+p[a-1];
	  int Median = sum1/2;
	  printf("The median of given numbers is %d\n",Median);
	 }
	 else
	 {
	  int b=n/2;
	  int Median = p[b];
	  printf("The median of given numbers is %d\n",Median);
	 }
	 int mode;
	 for(int i=0; i<n; i++)
	 {
	       int c=1;
		  for(int j=i+1; j<n; j++)
		  {
			   if (p[i]==p[j])
			   {
					c++;
			   }
		  }
		  if(c>=max)
		  {
	      	max=c;
	      	mode=p[i];	
		  }
	 }
	 printf("The mode of given number is %d\n",mode); 
  return 0;
}

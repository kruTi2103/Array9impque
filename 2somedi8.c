#include <stdio.h>
 int main ()
 {
  int n;
  scanf("%d",&n);
  int p[n];
  int k[n];
  for (int i=0; i<n; i++)
  {
   scanf ("%d",&p[i]);
  }
  for (int i=0; i<n; i++)
  {
   scanf("%d",&k[i]);
  }
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
  	if(n%2==0)
	 {
	  int a=n/2;
	  int sum1=k[a]+k[a-1];
	  int Median = sum1/2;
	  printf("The median of given numbers is %d\n",Median);
	 }
	 else
	 {
	  int b=n/2;
	  int Median = k[b];
	  printf("The median of given numbers is %d\n",Median);
	 }
 }

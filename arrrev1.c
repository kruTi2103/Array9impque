#include <stdio.h>
int main ()
{
 int n;
 scanf("%d",&n);
 int p[n];
 for (int i=0; i<n; i++)
 {
  scanf("%d",&p[i]);
 }
 for (int i=n-1; i>=0; i--)
 {
  printf ("%d ",p[i]);
 }
 return 0;
}


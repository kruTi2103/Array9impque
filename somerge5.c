#include <stdio.h>
int main ()
{
  int n, c=0;
  scanf ("%d", &n);
  int p[n];
  int k[n];
  int r[n + n];
  int tem[n];
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
      for (int j = 0; j < n; j++)
	{
	  r[c] = k[j];
	  c++;
	}
    }
  for (int i=0; i<n+n; i++)
    {
     for(int j=i+1; j<n+n; j++)
     {
      if(r[i]>r[j])
       {
        tem[i]=r[i];
        r[i]=r[j];
        r[j]=tem[i];
       }
       else
       { 
        r[i]=r[i];
        r[j]=r[j];
       }
     }
     }
     for (int i = 0; i < n + n; i++)
    {
      printf ("%d ", r[i]);
    }
   
  return 0;
}


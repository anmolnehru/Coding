#include<stdio.h>
#include<stdlib.h>

void main()
{
   int n,i;
   printf("Enter n & i\n");
   scanf("%d%d",&n,&i);
   printf("\n %d,%d\n\n",n,i);

   int j, k = 0;
   double *fact = (double *)malloc(n*sizeof(double));
   double *perm = (double *)malloc(n*sizeof(double));

   // compute factorial numbers
   fact[k] = 1;
   while (++k < n)
      fact[k] = fact[k - 1] * k;
   //printf("%ld")

   // compute factorial code
   for (k = 0; k < n; ++k)
   {
      perm[k] = i / fact[n - 1 - k];
      i = i % fact[n - 1 - k];
   }

   // readjust values to obtain the permutation
   // start from the end and check if preceding values are lower
   for (k = n - 1; k > 0; --k)
      for (j = k - 1; j >= 0; --j)
         if (perm[j] <= perm[k])
            perm[k]++;

   // print permutation
   for (k = 0; k < n; ++k)
      printf("%lf ", perm[k]);
   printf("\n");


}
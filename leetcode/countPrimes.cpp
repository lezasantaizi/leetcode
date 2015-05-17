#include "countPrimes.h"

int Solution1::countPrimes(int n)
 {

	 char *A = (char*)malloc(sizeof(char)* n);
	 memset(A,1,sizeof(char)*n);
	 for (int i = 2 ;i< sqrt(n);i++)
	 {
		 for (int j = i*i ;j<n ;j = j+i)
		 {
			 A[j] = 0;
		 }
	 }

	 int sum = 0;
	 for (int i = 2; i<n; i++)
	 {
		 if(A[i] == 1)
		 {
			 cout<< i<< endl;
			 sum++;

		 }
	 }
	 free(A);
	 return sum ;

 }
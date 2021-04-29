#include <stdio.h>
int facto1(int A);
int facto2(int B);
int facto3(int C);
int main()
{
	
	int n,r,k,N,R,K;
	int result;
	printf("Enter the Value of n");
	scanf("%d", &n);
	N = facto1(n);
	printf("%d\n",N);
	
	printf("Enter the value of r");
	scanf("%d", &r);
    R = facto2(r);
    printf("%d\n",R);
	
	printf(" Enter n-r");
	scanf("%d", &k);
	K = facto3(k);
	printf("%d\n",K);

	result=N/R*(K);
	
	printf(" nCr=%d",result);
	
return 0;	
	
}

int facto1(int A)
{
		int fact1=1, i ;
		for(i=1;i<=A;i++)
		{
			fact1= fact1*i;
		}
			
	    	
	    	
	    return fact1;	 
}

int facto2(int B)
{
	int fact2=1,i;
			
	for(i=1;i<=B;i++)
	{
		fact2=fact2*i;
	}
			
	    	
	    	
	return fact2;
}

int facto3(int C)
	{
		int fact3=1,i;
			for(i=1;i<=C;i++)
			{
				fact3=fact3*i;
			}
			
	    
	    	
	    return fact3;
	}
		
		

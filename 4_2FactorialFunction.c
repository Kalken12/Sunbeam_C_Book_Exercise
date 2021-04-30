#include <stdio.h>
int facto1(int A);
int combo(int nCr, int M);


int main()
{ 	int N, R;
	int ans;
	printf("Enter the value of N");
	scanf("%d",&N);
	printf("Enter the value of C");
	scanf("%d",&R);
	
	
	ans= combo(N,R);               // this will calculate nCR =  n!/r!(n-r)!
	printf("%d",ans);
return 0;	
	
}



int combo(int n, int r)

{
	int ans;

	ans=(facto1(n)/facto1(r))*facto1(n-r);
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

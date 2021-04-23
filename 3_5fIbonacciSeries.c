
/*
Author:- Kalyani V. Kenekar (kalyaniknkr@gmail.com)
Date:- 23/4/2021
Discription:- 

			Writing a program to display n terms of Fibonacci series.
*/
			

#include <stdio.h>   
void main()
{
	int  i, n, t1= 0, t2=1, nxtterm;                               //interger initilization(reserving memory for  variables)
	
	printf("Enter the limit digit to cut fabonacci series");       //printing message request for user to give limit for Fibanacci series.

	scanf("%d",&n);	                                                 //catching  user input in  "n" variable.
	
	
	for(i=1; i<=n; i++)                                         // loop starts from '1' to 'n'(codition for "for loop").
	{
		printf("%d\n\n",t1);                                    
		nxtterm=t1+t2;
		t1=t2;
		t2=nxtterm;
	}

	
}

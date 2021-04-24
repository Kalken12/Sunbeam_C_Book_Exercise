/*
Author:- Kalyani V. Kenekar (kalyaniknkr@gmail.com)
Date:- 24/4/2021
Discription:- 
			This program is for sum of the digit of number entered by user,
*/


#include <stdio.h>
void main()
{
	
	int num,sum=0,rem,t;
	printf("Enter the number");
	scanf("%d",&num);
	
	t=num;
	
	while(t!=0)
	{
		rem = t % 10;
		sum = sum + rem;
		t   = t / 10;
		
		
	}
	printf("sum of digit of %d =%d",num,sum);
	
	
}

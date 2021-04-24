

/*
Author:- Kalyani V. Kenekar (kalyaniknkr@gmail.com)
Date:- 24/4/2021
Discription:- 
			This program is for print the -


			                          1 1
									 2 1 1 2
								   3 2 1 1 2 3
							     4 3 2 1 1 2 3 4
					           5 4 3 2 1 1 2 3 4 5
			           
*/
#include<stdio.h>
#include<conio.h>

int row0,col0,row, limit;


void main()
{
	
	printf("Enter the limit");
	scanf("%d", &limit);
   for(row0=1; row0<=limit; row0++)
   	{
   		for(col0=limit-row0; col0>=1; col0--)
   			{		
   				printf("\t");
			}
			
			
			
			for(col0=row0; col0>=1;col0--)
  			{
  				printf("%d\t",col0);
			}	
			
			
			for(col0=1; col0<=row0;col0++)
  			{
  				printf("%d\t",col0);
			}
			
		printf("\n");
	
   }

}
   

#include <stdio.h>
void main()
{
	int  row, col, limit=6;
	
	
	
	
	for(row=1; row<=limit; row++)
	 {
	 for(col=limit-row; col>=1 ;col--)
	 	{
	 		printf("\t");
		 }
		 
		 
		for(col=row; col>=1;col-- )	 
		{
			printf("%d\t",col);
		}
	
		for(col=1; col<=row; col++)
		{
			printf("%d\t",col);
			
		}
		
		
		
		
		
		 printf("\n");
		 
	 }
	 

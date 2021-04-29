#include<stdio.h>
void drawline();
 int i, limit;
 char A;
void main()
{
	printf("Enter the Character");
	scanf("%c",&A);
	
	printf("Enter the limit ");
	scanf("%d",&limit);
		drawline();
		
	printf("\nCharacter\t\tASCII\n");
		
		drawline();
	
	
	printf("\nA-Z\t\t\t65-90\n");
	printf("a-z\t\t\t97-122\n");
	printf("0-9\t\t\t48-57\n");
	
		drawline();
}
void drawline()
{
	for(i=1; i<=limit; i++)
	{
		printf("%c",A);
	}
}

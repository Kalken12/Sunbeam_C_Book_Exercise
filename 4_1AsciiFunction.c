#include <stdio.h>
#include <conio.h>

int n, i;
    char A; 
void drawline(char A, int n)
{
	int  itretion;
	for(itretion=1; itretion<=n; itretion++)
	{
		printf("%c",A);
	}
	printf("\n");

	
}

void asciiContent()
{
	   printf("Character\t\t\t\tASCII\n");
	
	        drawline( A,  n);

	   printf("\nA-Z\t\t\t\t\t65-90\n");
	   printf("a-z\t\t\t\t\t97-122\n");
	   printf("0-9\t\t\t\t\t48-57\n");	
}

void main()
{   
  	  printf("Enter character you want to print..");
	  scanf("%c",&A);
	  scanf("%d",&n);
	
	  drawline( A,  n);
	  asciiContent();
	  drawline( A,  n);

}

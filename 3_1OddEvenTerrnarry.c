#include <stdio.h>
void main()
{
	
	int  input;
	char num;
	printf("Enter the Number");
	scanf("%d",&input);
	num= input%2==0 ? 'e': 'o';
	if(num=='e')
	{
		printf("NUmber is Even");
		
	}else
	printf("Number is odd");
}

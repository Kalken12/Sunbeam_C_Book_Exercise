#include <stdio.h>
#include <string.h>
void main()
{
	int deptno, id;
	char ch;
	
	
	printf("Enter the id");
	scanf("%d", &id);

	printf("Enter the deptNo");
	scanf("%d",&deptno);
	
	printf("Enter designation code");
	scanf("%c",&ch);
	ch=getchar();
	

	printf("Employee with employee id %d",id);
	
	printf("is working in ");
	
	switch(deptno)
	{
	
		case 10:
			printf("\"Marketing\"");
			break;
			
		case 20:
			printf("\"Management\"");
			break;
		case 30:
			printf("\"Sales\" ");
			break;
		case 40:
			printf("\"Designing\" ");
			break;
		default:
			printf("\"No Exist\" ");
	}
		
	printf("Department as");	
	
	
	
		switch (ch)
	{
		case 'M':
			      printf("\"Manager\" ");
			
			       break;
		
		case 'S':
					printf("\"Supervisor\" ");
					break;
				
		case 's':
					printf("\"Security Officer\" ");
					break;
				
		case 'C':
					printf("\"Clerk\" ");
					break;
				
		default:
					printf("\"No Exist\" ");	
			
			
			
	}
	
	
	
}




	

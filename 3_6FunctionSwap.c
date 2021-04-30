#include <stdio.h>
void swap(int *a, int *b);
int main()
{
	int a,b;
	printf("Enter 1st number:  ");
	scanf("%d",&a);
	
	printf("Enter 2nd number:");
	scanf("%d", &b);
	printf("-------------After the swaping---------------");
	swap(&a, &b);
	
	printf("value of a=%u \n value of b=%u",a,b);
	


	return 0;

}
void swap(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a= *b;
	*b= temp;
}

#include <Stdio.h>
int power(int , int);
void main()
{
	int a, b, result;
	printf("Enter the number as a base");
	scanf("%d",  &b);
	printf("Enter the power of base (only positive)");
	scanf("%d", &a);
	result=power(b,a);
	printf("%d^%d=%d",b,a,result);
	return 0;
}
int power(int b, int a)
{

	if(a!=0)
	{	
		return (b*power(b,(a-1)));
	}else(a==0);
	return 1;
}

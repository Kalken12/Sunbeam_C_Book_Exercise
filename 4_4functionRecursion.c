#include<stdio.h>
int f(int);
int main()
{
int n=7, m= 1, i;
printf("Enter Total terms:");
scanf("%d", &n);
printf("Fibonacci series terms are:");
for(i = 1; i <= n; i++)
{
printf("%d\n", fibonacci(m));
m++;

}
return 0;
}
int fibonacci(int n)
{
if(n == 0 || n == 1)
return n;
else
return(fibonacci(n-1) + fibonacci(n-2));
}

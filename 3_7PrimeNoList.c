
/*
Author:- Kalyani V. Kenekar (kalyaniknkr@gmail.com)
Date:- 23/4/2021
Discription:- 
		This program is return prime numbers between 1 to 100.
*/






#include <stdio.h>
void main()
{   int 
    for(int i=2;i<100;i++) 
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d\n",i);
        }
    }
}

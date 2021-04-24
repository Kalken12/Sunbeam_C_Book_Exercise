
/*
Author:- Kalyani V. Kenekar (kalyaniknkr@gmail.com)
Date:- 23/4/2021
Discription:- 
			This program is for display number of days in given month and year using if, else if statement and || operator.
*/






#include <stdio.h>
void main()

{
    
    int year, month;                         //interger initilization(reserving memory for  variables)
    
    printf("Enter the month");               //printing message request  for user to give month number
    scanf("%d", &month);				     //catching  user input in 'month' variable.


    
    printf("Enter the year");              //printing message request for user to give year.
    scanf("%d",&year);                      //catching  user input in 'year' variable.
    
    
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)       //contiton for month contain 31 days.   
	{    
	{   
        printf("Number of days is 31");
        
    }
    else if((month == 2) && ((year%400==0) || (year%4==0 && year%100!=0)))	
    {
        printf("Number of days is 29");                                                                    //contiton for month contain 299 days.   
	{   
    }
    else if(month == 2)
    {
        printf("Number of days is 28");                                                                     //contiton for month contain 28 days.   
	{   
    }	
    else if(month == 4 || month ==6 || month==9 || month==11)
    {
	
        printf("Number of days is 30");                                                                       //contiton for month contain 30 days.   
	{   
    }else
	{
		printf("monthh not exist");
	}
    
}

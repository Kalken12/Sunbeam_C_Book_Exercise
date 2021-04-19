/*
Author:- Kalyani V. Kenekar(kalyaniknkr@gmail.com)
Date:- 19/4/2021
Discription:- 
			This program takes input from user (character) and gives output  in following way.
				-If character is '0' to '9' then "Digit".
				-If character is 'A' to 'Z' then "Upper case".
				-If character is 'a' to 'z' then "Lower case".
				-If character is not from above then "something else".
				
*/





#include <stdio.h>


void main()


{
	char input ;                               //character initilization(reserving memory for input variable)
	
	printf("Enter the character");             //printing message request for user
	
	scanf("%c",&input);                        //catching  user input in  "input" variable
	
	if (input >='0' && input<='9')             //If character is '0' to '9' then "Digit".
	{
		printf(" Digit");
	}
	
	else if (input >='a' && input<='z')			//If character is 'a' to 'z' then "Lower case".
	{
		printf( "Lower case");
	}
	
	else if (input >='A' && input<='Z')			//If "input" is 'A' to 'Z' then "Upper case".
	{
		printf(" Upper case");
	}

	else
	{
	printf("Something else");				//else  print  something else
	}
 
  	
}




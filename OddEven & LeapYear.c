//Odd or even AND Leap Year
#include<stdio.h>
int main()
{
	int year,a;
	printf("Enter the year you want to check : ");
	scanf("%d",&year);
	
	(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("It is a Leap Year \n \n ") : printf("It is NOT a Leap Year \n \n");
	
	printf("Enter value of a: ");
	scanf("%d",&a);
	(a % 2 ==0) ? printf("A is Even Number") : printf("A is Odd Number");
	
	
//Using Condition and Logical operators
	
/*	if((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0))
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It is not a leap year");
	}*/
		
		
		
// USing if Else
	
	/*if(year % 4 == 0 )
	{
		if(year % 100== 0)
		{
			if(year % 400 == 0)
			{
				printf("It is a leap year \n \n");
			}
			else
			{	
				printf("It is not a leap year \n \n");
			}
		}
		else
		{
			printf("Is is a leap year \n\n");
		}
		
	}
	else
	{
		printf("It is not a leap year \n \n");
	}*/	
}

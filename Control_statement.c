//Control Statement

#include<stdio.h>
int main()
{
	int celsius = 35 , fahrenheit;
	int age = 25 , weight = 60;
	
	printf("Checking condition to convert clesius to fahrenheit \n \n");
	if(celsius >30)
	{
	fahrenheit = celsius * 9/5 +32;
	printf("Temeprature from celsius to fahrenheit is : %d \n \n" , fahrenheit);
	
	}
	else
	{
		printf("Temperature is less than 30 degree celsius \n \n");
	}
	
	printf("Checking conditon if you can donate blood or not \n \n");
	if(age > 18)
	{
		printf("Your age condition is satisfied , you are eligible to donate blood \n \n ");
		
		if(weight >50)
		
			printf("You weight condition is satisfied \n \n");
		
		else
			printf("Your weight condition is not satisfied \n \n");
			
	}
	else
		{
			printf("Your age  condition is not satisifed , your are not eligible to donate blood");
		}
		
	printf("Thank you for donating blood");
}

	

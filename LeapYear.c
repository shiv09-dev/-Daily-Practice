
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year you want to check : ");
	scanf("%d",&year);
	
/*	if((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0))
	{
		printf("It is a leap year");
		/*if(year % 100 == 0)
		{
			printf("It is a leap year");
		}
		
	}
	else
	{
		printf("It is not a leap year");
	}*/
	
	if(year % 4 == 0 )
	{
		if(year % 100== 0)
		{
		
		
			if(year % 400 == 0)
			{
				printf("It is a leap year");
			}
			else
			{	
				printf("It is not a leap year");
			}
		}
		else
		{
			printf("Is is a leap year");
		}
		
	}
	else
	{
		printf("It is not a leap year");
	}
}

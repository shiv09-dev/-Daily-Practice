#include<stdio.h>
int main()
{
	int i,num,temp;
	printf("Enter number : ");
	scanf("%d",&num);
	for(i = 2;i<=num-1;i++)
	{
		if(num % i ==0)
		{
			temp = 1;
			//printf("It is a prime number ");
			break;
		}
		else
		{
			temp = 2;
			//printf("It is not a prime number");
			break;
		}
	}
	if(temp = 1)
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not aprime number")
	}
	
}

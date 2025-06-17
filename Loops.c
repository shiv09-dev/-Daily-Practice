//Loops

#include<stdio.h>
int main()
{
	int i,starting,ending;
	int j;
	int a,num,ans;
	printf("Enter the starting Number: ");
	scanf("%d",&starting);	
	printf("Enter the Ending Number: ");
	scanf("%d",&ending);

	printf("Numbers divisible by 3 and 5 in the given number is : \n");
	
	for(i=starting;i<=ending;i++)
	{
		if(i % 3==0 && i % 5==0)
		{
			//printf("Numbers divisible by 3 and 5 in the given number is : \n");
			printf(" %d \n \n",i);
		}
	}
	
	printf("Odd and Even in the given range : \n");
	for(j=0;j<=20;j++)
	{
		if(j % 2==0)
		{
			printf("%d -> Even \n",j);
		}
		else
		{
			printf("%d -> Odd \n",j);
		}
	}
	//While Loop
	printf("Enter value to find the table for :");
	scanf("%d",&num);	
	while(a<=10)
	{
		ans = num*a;
		printf(" %d * %d = %d \n",num,a,ans);
		a++;
	}	
}

//accept range from user starting and ending and find divisible by 3,5

#include<stdio.h>
int main()
{
	int num,count=0,rem;
	printf("Enter number : ");
	scanf("%d",&num);

	while(num!=0)
	{
		rem=num%10;
		count++;
		num=num/10;
	}
	printf(" The length of the variable is : %d",count);
	
}

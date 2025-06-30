#include<stdio.h>
int main()
{
	int arr[10],add_arr[10];
	int i,num,add1;
	printf("Enter the number of elements :");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter the elements of the array: ");
		scanf("%d",&arr[i]);
	}
	
	
	printf("Enter the number to add: ");
	scanf("%d",&add1);
	for(i=0;i<num;i++)
	{
		arr[i] = arr[i] + add1;
		//printf("Added array is \n: ");
	}
	
	
	printf("New added array is: \n");
	for(i=0;i<num;i++)
	{
		add_arr[i] = arr[i];
		printf("%d \n", add_arr[i]);	
	}
	
	
}

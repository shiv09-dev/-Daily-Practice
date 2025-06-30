#include<stdio.h>

int main()
{
	int arr1[10],arr2[10],ans[10];
	int i,num;
	
	printf("Enter the number of elements you want to enter in both arrays: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("enter elements of array 1: ");
		scanf("%d",&arr1[i]);
	}
	
	printf("\n");
	
	for(i=0;i<num;i++)
	{
		printf("Enter elements of array 2: ");
		scanf("%d",&arr2[i]);
	}
	
	printf("\n");
	
	printf("Multiplied array is: \n");
	for(i=0;i<num;i++)
	{
		ans[i] = arr1[i] * arr2[i];
		printf(" %d \n",ans[i]);	
	}
	
	/*for(i=0;i<num;i++)
	{
		printf("Multiplied array is: %d",ans[i]);
		
	}*/
	
}

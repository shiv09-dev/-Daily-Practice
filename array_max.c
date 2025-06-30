#include<stdio.h>
int main()
{
	int arr[10],i,num,max;
	printf("Enter number of elements:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		printf("Enter elements of array:");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<num;i++)
	{
		if(arr[i]>arr[i+1])
		{
			max = arr[i];
			arr[i] = arr[i+1];
		}
		else
		{
			max = arr[i+1];
		}
	}
	printf("maximum number is : %d",max);

}

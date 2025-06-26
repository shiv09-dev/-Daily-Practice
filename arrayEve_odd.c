#include<stdio.h>
int main()
{
	int eve_odd[] = {1,2,3,4,5},even[10],odd[10];
	int i,j =0,k =0;
	for(i=0;i<=5;i++)
	{
		if(eve_odd[i] % 2 ==0)
		{
			even[j] = eve_odd[i];
			j++;
		}
		else
		{
			odd[k] = eve_odd[i];
			k++;
		}
	}
	
	printf("Even elements in array are: %d \n");
	for(i=0; i<j;i++)
	{
		printf("%d ",even[i]);
	}
	
	printf("odd elements in array are: %d \n");
	//printf("\n");
	for(i=0; i<k;i++)
	{
		printf("%d ",odd[i]);
	}
}

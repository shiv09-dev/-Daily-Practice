#include<stdio.h>
int main()
{	
	int i,j,row,col;
	printf("Enter the size of rows and columns:");
	scanf("%d %d",&row,&col);
	int arr_1[row][col];
	
	for(i=0;i<row;i++)
	{	
		for(j=0;j<col;j++)
		{
			printf("Enter elements of array in rows and columns [%d][%d]:",i,j);
			scanf("%d", &arr_1[i][j]);			
		}
	}

	printf("\n");
	
	printf("Array is:\n");
	for(i=0;i<row;i++)
	{
		printf("\n");
		
		for(j=0;j<col;j++)
		{
			printf("\t %d", arr_1[i][j]);
					
		}
	}
}

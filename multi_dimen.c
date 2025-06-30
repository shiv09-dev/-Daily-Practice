#include<stdio.h>
int main()
{
	int arr_1[3][3] = {{1,2,3},{11,22,33},{111,222,333}};
	int i,j;
	
	printf("3 x 3 array is:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		
		for(j=0;j<3;j++)
		{
			printf("\t %d",arr_1[i][j]);
		}
	}
}

#include<stdio.h>
int main()
{
	int multi[] = {1,2,4,7};
	int i,ans;
	for(i = 0;i<4;i++)
	{
		ans = ans * multi[i];
	}
	printf("Multiplication of elements in array is: %d",ans);
}

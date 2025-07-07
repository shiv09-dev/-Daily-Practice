#include<stdio.h>
int main()
{
	FILE *name;
	int i;
	name = fopen("Display.txt","a");
	char data[100];
	
	printf("Enter the data you want in the file : ");
	gets(data);
	
	if(name != NULL)
	{
		printf("File opened \n");
		
		i = fprintf(name,data);
		printf("\n");
		printf("File creatd and added data successfully \n");
	}
	else
	{
		printf("File not opened");
	}
}

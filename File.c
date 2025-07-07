#include<stdio.h>
int main()
{
	FILE *name;
	int i;
	name = fopen("Create and Display.txt","a");
	char data[100] = "Toady we learned file in c classs \n";
	
	if(name != NULL)
	{
		printf("File opened \n");
		
		i = fprintf(name,data);
		printf("File creatd and added data successfully \n");
	}
	else
	{
		printf("File not opened");
	}
}

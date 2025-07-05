#include<stdio.h>
int main()
{
	FILE *name;
	int i;
	name = fopen("END.txt","a");
	char data[100];


	while(i<=data[i])
	{
		printf("Enter the data you want in the file : ");		
		gets(data);
		
		if(data== "end")
		{
			flcose(name);
			printf("File Closing");
			break;
		}
		
		if(name != NULL)
		{
			printf("File is opened \n");
		//	printf("Line 1 in the file :");
			i = fprintf(name,data);
			i = fprintf(name,"\n");
			printf("File created and added data successfully \n");
		}
		else
		{
			printf("File not opened \n");			
		}	
	}
}

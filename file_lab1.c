#include<stdio.h>
int main()
{
	FILE *name;
	int i;
	name = fopen("END.txt","a");
	char data[100];
	char data1[100] = "end";
	
	if(name != NULL)
	{
		while(strcmp(data,data1) != 0)
			{
				printf("File Opened \n");
				printf("Enter the data you want in the file : ");		
				gets(data);
				
				i = fprintf(name,"\n");
				i = fprintf(name,data);
				printf("File is Created and data is added successfully \n");	
			}			
	}
	else
	{
		printf("FIle not opened");	
	}
		
	printf("Closing File");
	fclose(name);
}

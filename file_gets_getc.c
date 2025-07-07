#include<stdio.h>
int main()
{
	FILE *name;
	char data[100];
	name = fopen("Display.txt","r");
	int c;
	
	if(name != NULL)
	{
		while(fgets(data,sizeof(data),name) != NULL)
		{
			printf(" This prints data line by line %s",data);
		}
		
		printf("\n \n");
		
		while(c != EOF)
		{
			c = fgetc(name);
			printf(" This prints Data character by character %c",c);
		}
	}
	fclose(name);
	printf("File closed");
}

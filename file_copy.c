#include<stdio.h>
int main()
{
	char data[100];
	FILE *src, *dest;
	
	src = fopen("source.txt","r");
	dest = fopen("Destination.txt","w");
	
	if(src != NULL)
	{
		while(fgets(data,sizeof(data),src) != NULL)
		{
			fprintf(dest,data);
		}
		printf("*** Data From Source file is Copied to Destination File Successfully ***");
	}
	printf("\n \n");
	printf("Closing both Files");
	fclose(src);
	fclose(dest);
}

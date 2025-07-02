#include<stdio.h>
#include<string.h>
int main()
{
	char firstName[]="Shivam";
	char lastName[]="Dave";
	int len;
	
	len=strlen(firstName);
	printf("Length of string before concatnation is : %d \n \n",len);
	
	strcat(firstName,lastName);
	printf("Concated string is : %s \n \n",firstName);
	
	len=strlen(firstName);
	printf("Length of string after concatnation is : %d \n \n",len);
	
	char company[]="Tops";
	
	strcat(firstName,company);
	printf("Added Third string is : %s \n",firstName);
}


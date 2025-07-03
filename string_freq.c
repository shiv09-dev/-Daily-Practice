#include<stdio.h>
int main()
{
	char name[50];
	char c;
	int i,count = 0;
	
	printf("Enter name : ");
	gets(name);
	
	printf("Enter the Character you want to find : ");
	scanf("%c",&c);
	
	for(i=0; name[i] != NULL;i++)
	{
		if(c == name[i])
		{
			count++;		
		}	
	}
	printf("\n");
	printf("%c is repeated %d times in the given string ",c,count);
	
}

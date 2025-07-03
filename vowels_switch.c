#include<stdio.h>
#include<string.h>
int main()
{
	int i,ch = 0;
	char str_1[20];
	
	printf("Enter name in the string : ");
	gets(str_1);
	
	printf("\n");
	for(i =0; str_1[i] != NULL;i++)
	{
		switch(str_1[i])
		{
							
			case 'a': 
			case 'e': 			
			case 'i': 
			case 'o': 
			case 'u': 
					ch++;
					break;		
			default: 
					//printf("Invalid Choice");
					break;				
		}
	}
	printf("Total number of vowels in the given string is : %d \n",ch);	
}

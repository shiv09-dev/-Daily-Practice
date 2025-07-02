#include<stdio.h>
#include<string.h>
int main()
{
	int val;
	char name[20];
	char name1[20];
	
	printf("Enter data in the string 1 : ");
	gets(name);
	
	printf("Enter data in the string 2 : ");
	gets(name1);
	
	val=strcmp(name,name1);
	//printf("%d \n",val);
	
	printf("\n");
	if(val==0)
	{
		printf("Both String are Equal , we will get vaalue as : %d",val);
	}
		else if(val==1)
		{
			printf("string 1 is bigger than string 2 , we will get value as : %d \n \n",val);
			printf("%s is bigger then %s ",name,name1);
		}
	else
	{
		printf("string 2 is bigger than string 1 , we will get value as : %d \n \n",val);
		printf("%s is bigger then %s ",name1,name);	
	} 
	
	
}
	


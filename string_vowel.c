#include<stdio.h>
int main()
{
	char name[50];
	int i,count_1 = 0,count_2;
	printf("ENter the name : ");
	gets(name);
	
	for(i=0;name[i] != NULL ;i++)
	{
		if(name[i] =='A' || name[i] =='E' || name[i] =='I' || name[i] =='O' || name[i] =='U' || name[i] =='a' ||
		   name[i] =='e' || name[i] =='i' || name[i] =='o' || name[i] =='u')
		{
			count_2++;
			//printf("%c \n",name[i]);	
		}
		count_1++;	
	}
	printf("Number of vowels in string is : %d \n",count_2);
	printf("Length of string is : %d \n",count_1);
}

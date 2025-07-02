#include<stdio.h>
#include<string.h>
int main()
{
	int choice,len_1,len_2;
	char str_1[20];
	char str_2[20];
	char final[20];
	
	printf("Enter data in string 1 :");
	gets(str_1);
	printf("Enter data in string 2 :");
	gets(str_2);
	
	printf("\n");
	
	do
	{
		printf("1.Concating both strings \n");
		printf("2.Finding length both strings \n");
		printf("3.Copying string 2 into string 1 \n");
		printf("4.Copying specific elements of string 2 into string 1 \n");
		printf("5.Concating specific elements of string 2 into string 1 \n");
		printf("6.Exit \n \n");
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
		
		printf("\n");
		switch(choice)
		{
			case 1: strcat(str_1,str_2);
			//gets(str_1);
			printf("Answer is : %s \n \n",str_1);
			break;
			
			case 2: len_1 =strlen(str_1);
					//gets(str_1);
					printf("Answer is : %d \n \n",len_1);
			
					len_2 =strlen(str_2);
					//gets(str_1);
					printf("Answer is : %d \n \n",len_2);
					break;
			
			case 3: strcpy(final,str_2);
					//gets(final);
					printf("Answer is : %s \n \n",final);
					break;
			
			case 4: strncpy(final,str_1,4);
					//gets(final);
					printf("Answer is : %s \n \n",final);
					break;
			
			case 5: strncat(str_1,str_2,2);
					//gets(str_1);
					printf("Answer is : %s \n \n",str_1);
					break;
			
			case 6: 
					printf("Exiting Program");
					break;
			
			default: 
					printf("Invalid Choice");
		}
		//printf("Answer is : %s \n",str_1);
		//printf("Answer is : %s",final);	
	}while(choice !=6);
}

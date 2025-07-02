#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	char cpyname[20];
	printf("Enter Your Name: ");
	gets(name);
	
	strcpy(cpyname,name);
	printf("Copied Name is %s ",cpyname);
	
	char msg[]="Wagwan brudda , how you doin";
	char new_msg[40];
	strncpy(new_msg,msg,35);
	printf("\n %s ",new_msg);
}


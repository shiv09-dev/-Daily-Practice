#include<stdio.h>

struct Employee
{
	int id,salary;
	char name[10],deptname[10];	
};

int main()
{
	int i,num;
	struct Employee a;
	
	printf("Enter the number of employees Details you want : ");
	scanf("%d",&num);
	
	printf("\n");
	
	for(i=1;i<=num;i++)
	{
		printf("Enter details of the Employee such as 'ID  Salary  Name  Department Name:' \n");
		scanf("%d %d %s %s",&a.id, &a.salary, &a.name, &a.deptname);		
	
		printf("\n");
		
		printf("Details of Employee is :\n");
		printf("ID: %d   Salary: %d   Name: %s   Department Name: %s \n \n",a.id,a.salary,a.name,a.deptname);
	}
}
/*	for(i =1;i<=num;i++)
	{
		printf("Details of Employee is : \n \n");
		printf("ID: %d   Salary: %d   Name: %s  Department Name: %s \n \n",a.id,a.salary,a.name,a.deptname);	
	}
*/		


#include<stdio.h>
#include<string.h>

struct Details
{
	int age;
	int roll_no;
	char name[10];
	
};

int main()
{
	int i,num = 2;
	struct Details s,m;
	char name1[10];
	
		printf("Enter Data for person 1 : ");
		scanf(" %d %d %s",&s.roll_no,&s.age,s.name);
		
		printf("Enter Data for person 2 : ");
		scanf("%d %d %s",&m.roll_no,&m.age,m.name);
	
	printf("\n");		
	printf("Roll_no: %d   Age:%d   Name:%s \n",s.roll_no,s.age,s.name);
	printf("Roll_no: %d   Age:%d   Name:%s \n",m.roll_no,m.age,m.name);
	
/*	m.roll_no = 101;
	s.roll_no = 105;
	
	m.age = 22;
	s.age = 24;
	
	strcpy(m.name,name1);
	strcpy(s.name,name1);
	
	printf("Details of Manhar is : Roll_NO:%d   Age:%d   Name:%s \n", m.roll_no, m.age, m.name);
	printf("Details of Shivam is : Roll_No:%d   Age:%d   Name:%s", s.roll_no, s.age, s.name);	
*/
}

//Logical Operators and Assignment operators 
#include<stdio.h>
int main()
{
	int a = 10, c,d,g,k,l;
	float b = 5.2 ,e,f;
	float i = 34.5 , j = 34.5;
	
	c = a>b;
	printf("Is a greater than b ?? %d \n \n",c);
	
	d = a<b;
	printf("Is a Less than than b ?? %d \n \n",d);
	
	a +=15;
	printf("Value of A after increment is : %d \n \n ",a);
	
	e = (a > b && b<a);
	printf("AND operation between a nd b is : %f \n \n ",e);
	
	f = (a = b || b>a);
	printf("OR opertation between a nd b is : %f \n \n",f);
	
	g = a != b;
	printf("Not equal operation between a and b is : %d \n \n",g);
	
	k = i>=j;
	printf("Is i greater than or equal to j ??  %d \n \n ",k);
	
	l = i<=j;
	printf("Is i less than or equal to j ??  %d \n \n ",l);
			
}

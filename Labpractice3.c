#include<stdio.h>
int main()
{
	float a,b,c;
	int x,y,z;
	int Area,width,length;
	const float pie = 3.14;
	int rad,dia,cir, area;
	int Tarea,base,height;

	printf("Size of Integer is : %d \n",sizeof(int));
	printf("Size of Character is : %c \n",sizeof(char));
	printf("Size of Float is : %f \n \n",sizeof(float));
	
	printf("Enter value for A : ");
	scanf("%f",&a);
	printf("Enter value for B : ");
	scanf("%f",&b);
	c = a*b;	
	printf("Multiplication of A and B is : %f \n \n",c);
	
	printf("Enter value for x : ");
	scanf("%d",&x);
	printf("Enter value for y : ");
	scanf("%d",&y);
	printf("Enter value for z : ");
	scanf("%d",&z);
	if(x>y && x>z)
	{
		printf("X is the largest number \n \n");
	}
		else if(y>z)
		{ 
			printf("Y is the largest number \n \n ");
		}
		
	else
	{
		printf("Z is the  largest number \n \n ");
	}
	
	
	printf("Enter value for Width : ");
	scanf("%d",&width);
	printf("Enter value for Length : ");
	scanf("%d",&length);
	Area = width * length;
	printf("Area of Rectangle is : %d \n \n ",Area);
	
	
	printf("Enter value for Radius : ");
	scanf("%d",&rad);
	dia = 2 * rad;
	printf("Diameter of Cicrle is : %d \n",dia);
	cir = 2*pie*rad;
	printf("Circumference of Circle is : %d \n ",cir);
	area = (pie*rad*rad);
	printf("Area of Circle is : %d \n \n \n",area);		
	
	
	printf("Enter value for base : ");
	scanf("%d",&base);
	printf("Enter value for height : ");
	scanf("%d",&height);
	Tarea = (base * height)/2;
	printf("Area of Triangle is : %d \n \n ",Tarea);	
	
}

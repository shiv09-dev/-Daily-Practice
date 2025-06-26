#include<stdio.h>
float add(float , float ,float);
bool

float add(float a, float b , float c)
{
	return a + b + c;
}
int main()
{
	float sum;
	sum = add(20.2,30.3,40.5);
	printf("%f ", sum);
}

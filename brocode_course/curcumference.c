#include "stdio.h"

int main()
{
	const double PI = 3.14159;
	double radius;
	double circumference;
	double area;

	printf("\nEnter the radius of a circe: ");
	scanf("%lf", &radius);

	circumference = 2 * PI * radius;
	area = PI * radius * radius;

	printf("\ncircumference is: %lf", circumference);
	printf("\narea is: %lf", area);

	return 0;
}
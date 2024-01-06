#include <stdio.h>
#include <math.h>

int main() {

	double A;
	double B;
	double C;

	printf("\nEnter a side A: ");
	scanf("%lf", &A);

	printf("\nEnter a side B: ");
	scanf("%lf", &B);

	C = sqrt(A * A + B * B);

	printf("\nSide C: %lf", C);

	return 0;
}
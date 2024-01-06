#include <stdio.h>

int main()
{
	char operator;
	double num1;
	double num2;
	double result;

	printf("\nEnter an operator (+ - * /): ");
	scanf("%c", &operator);

	printf("Enter number 1: ");
	scanf("%lf", &num1);

	printf("Enter number 2: ");
	scanf("%lf", &num2);

	switch(operator) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		default:
			printf("%c operator is not valid", operator);
	}

	printf("\nResult: %.2lf", result);

	return 0;
}
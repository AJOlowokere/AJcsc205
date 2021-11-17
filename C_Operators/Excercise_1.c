#include <stdio.h>
int main()
{
	int v1, v2, output;
	printf("Enter first value: ");
	scanf ("%d" , &v1 );
	printf("Enter second value: ");
	scanf ("%d" , &v2 );

	output = v1 + v2;
	printf("Value 1 + Value 2 = %d \n", output);

	output = v1 - v2;
	printf("Value 1 - Value 2 = %d \n", output);

	output = v1 * v2;
	printf("Value 1 * Value 2 = %d \n", output);

	output = v1 / v2;
	printf("Value 1 / Value 2 = %d \n", output);

	output = v1 % v2;
	printf("Remainder when Value 1 divided by Value 2 = %d \n", output);
	
	return 0;
}

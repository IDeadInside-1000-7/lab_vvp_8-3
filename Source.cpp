#include <stdio.h>
#include <math.h>
int main()
{
	int A, B, rez, dl;
	printf("Enter A and B (A > B):\n");
	printf("A = ");
	scanf("%i", &A);
	printf("B = ");
	scanf("%i", &B);
	if (A < B)
		printf("Please, enter (A > B)!");
	else
	{
		rez = A / B;
		dl = A - (rez * B);
		printf("Part of A is: ");
		printf("%i", dl);
	}
}
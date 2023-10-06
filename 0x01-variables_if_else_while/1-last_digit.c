#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of @n.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n mod 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	else if (lastDigit < 6 && lastDigit > 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	return (0);
}

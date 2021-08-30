#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of n and prints out whether it is
 * greater than 5, 0, or less than 6
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	printf( n, lastDigit);
	if (lastDigit > 5)
		printf("is positive");
	else if (lastDigit == 0)
		printf("is zero");
	else
		printf("is negative");
	return (0);
}

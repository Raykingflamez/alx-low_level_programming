  
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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastDigit > 0)
		printf("greater than 0\n");
	else if (lastDigit == 0)
		printf("0\n");
	else
		printf("less than 0 and not 0\n");
	return (0);
}

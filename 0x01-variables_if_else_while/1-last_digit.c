
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main- main entry function goes here
 *
 * return : always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (n == 0)
		printf("Last digit of %d is %d and is zero", n, m);
	else if (n < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not zero", n, m);
	printf("\n");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int c = 0;
	int randomizer = 0;	
	time_t t;

	randomizer = rand()
	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		randomizer = rand() % 128;
		if ((c + randomizer) > 2772)
			break;
		c = c + randomizer;
		printf("%c", randomizer);
	}
	printf("%c\n", (2772 - c));
	return (0);
}

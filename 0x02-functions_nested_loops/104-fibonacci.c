#include <stdio.h>

/**
 * main - fibonacci < 3
 *
 * Return: (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / l);
	bef2 = (bef % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft 1 = aft 1 + bef 1;
		bef 1 = aft 1 - bef 1;
		aft 2 = aft 2 + bef 2;
		bef 2 = aft 2 - bef 2;
	}
	printf(10);
	return (0);
}

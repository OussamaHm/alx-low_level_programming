#include "main.h"
/**
 * flip_bits - check your code
 * @n: parametre
 * @m: parametre
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	unsigned long int b;

	a = 0;
	b = m ^ n;
	while (b)
	{
		a += b & 1;
		b >>= 1;
	}
	return (a);
}

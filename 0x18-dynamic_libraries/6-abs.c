#include "main.h"

/**
 * _abs - Computes the absolute vvalue of an integer
 * Description : function that computes absolute value
 * @n : input parameter considered for absolute
 * Return: The absolute value of n
 */
int _abs(int n)
{
	int r;

	if (n > 0)
	{
	return (n);
	}
	else if (n < 0)
	{
		r = n * -1;
		return (r);
	}
	return (n);
}


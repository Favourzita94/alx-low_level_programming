#include <stdio.h>                                                            
#include <stdlib.h>                                                          
#include <time.h>
/**
 * main - prints a random number and states whether
 *  it is positive,negative,zero
 *
 *Return:Always 0
 */
int main(void)
{
	intn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
	  printf("%d is positive\n", n);
	else if (n<0)
	  printf("%d is negative\n", n);
	else
	  printf("%d is zero\n", n);

	return(0);
}


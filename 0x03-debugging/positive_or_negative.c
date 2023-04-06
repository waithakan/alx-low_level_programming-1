#include "main.h"
/**
 * positive_or_negative - checks for positive or negative integers
 * Return:if 0 exit properly
 * @i: the integer ti be checked
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d the number is positive\n", i);
	else if (i == 0)
		printf("%d the number is zero\n", i);
	else
		printf("%d the number is negative\n", i);
	return (0);
}

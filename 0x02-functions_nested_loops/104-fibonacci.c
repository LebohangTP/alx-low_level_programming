#include <stdio.h>
/**
 * numLength - returns the lenght of string
 * @num: operand number
 * Return: numver of digits
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

#include <stdio.h>

/**
 * main - Prints first 50 numbers, starting with 1 and 2,
 * 	separated by a comma followed by a space
 *
 * Return: Always 0.
 */

int main(void)
{
	int count;
	int first_num, next_num, total;

	for (count = 0; count <= 49; count++)
	{
		sum = first_num + next_num;
		printf("%d", sum);

		first_num = next_num;
		next_num = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

#include <stdio.h>
/**
 * _squares - Function to create squares
 * main - Get Squares
 * Description: Print squares using #
 * @c: Number to know size
 * Return: 0
 */
void _squares(int c);
int main(void)
{
	int i = 4;

	_squares(i);
	return (0);
}
void _squares(int c)
{
	int i, j;

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

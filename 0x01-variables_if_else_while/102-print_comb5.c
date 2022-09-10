<<<<<<< HEAD
#include <stdio.h>

/**
 *  *main - print all combinations of three different digits
 *  *Return: Always 0 (Success)
 */

int main(void)
{
<<<<<<< HEAD
		int one;
			int ten;
				int hundred;

					for (hundred = '0'; hundred <= '9'; hundred++) /*hundreds place*/
							{
									for (ten = (hundred + 1); ten <= '9'; ten++) /*tens=100s+1*/
											{
													for (one = (ten + 1); one <= '9'; one++) /*ones*/
															{
																	putchar(hundred);
																		putchar(ten);
																			putchar(one);
																				if (hundred != '7' || ten != '8' || one != '9')
																						{
																								putchar(',');
																									putchar(' ');
																										}
																					}
														}
										}
						putchar('\n');

							return (0);
=======
int i, j;

for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (i < j)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
>>>>>>> 6e841f189795473473db28f7ed225564a5657886
}
=======
#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
>>>>>>> dd6027aa0e3eda2089c38d0b8cf25ce3e750d513

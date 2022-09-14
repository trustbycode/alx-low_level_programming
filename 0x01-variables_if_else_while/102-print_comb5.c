<<<<<<< HEAD
nclude <stdio.h>



/**
 *
 *  * main - program that prints all possible combinations of
 *
 *   * two two-digit
 *
 *    * The numbers should range from 0 to 99
 *
 *     * Numbers must be separated by ,followed by a space
 *
 *      * All numbers should be printed with two digits. 1 should be printed as 01
 *
 *       * Return: 0
 *
 *        */



int main(void)

{

		int n1 = 48;

			int a = 0;

				int b;

					int com = 44;



						while (a <= 99)

								{

											b = a + 1;

													while (b <= 99)

																{

																				putchar((a / 10) + n1);

																							putchar((a % 10) + n1);

																										putchar(32);

																													putchar((b / 10) + n1);

																																putchar((b % 10) + n1);

																																			if (a != 98 || b != 99)

																																							{

																																												putchar(com);

																																																putchar(32);

																																																			}

																																						b += 1;

																																								}

															a += 1;

																}

							putchar('\n');

								return (0);

=======
#include <stdio.h>

/**
 * main - a simple program that outputs unordered
 * combinations of two digit integers without duplicates
 *
 * Return: 0 on success
 */
int main(void)
{
	int ifirst;
	int i;
	int jfirst;
	int j;

	for (ifirst = 48; ifirst < 58; ifirst++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			jfirst = ifirst;
			for (; jfirst < 58; jfirst++)
			{
				for (; j < 58; j++)
				{
					putchar(ifirst);
					putchar(i);
					putchar(' ');
					putchar(jfirst);
					putchar(j);
					if (ifirst != 57 || jfirst != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
>>>>>>> c75cdbb7d572ee49260a143afb8932923961354c
}

#include <stdio.h>

<<<<<<< HEAD


/**

 * main - a simple program that outputs 0-9 separated by commas

 *

 * Return: 0 on success

 */

int main(void)

{

	int i;

	int j;

	int k;



	for (i = 48; i < 56; i++)

	{

		for (j = i + 1; j < 57; j++)

		{

			for (k = j + 1; k < 58; k++)

			{

				putchar(i);

				putchar(j);

				putchar(k);

				if (i != 55 || j != 56 || k != 57)

				{

					putchar(',');

					putchar(' ');

				}

			}

		}

	}

	putchar('\n');

	return (0);

}[A
[5~[5~[5~[5~[5~[5~

=======
/**
 * main - program that prints all possible different combinations of
 * three digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: 0
 */

int main(void)
{
	int n1 = 48;
	int n2, n3;
	int com = 44;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 != 55 || n2 != 56 || n3 != 57)
				{
					putchar(com);
					putchar(32);
				}
				n3 += 1;
			}
			n2 += 1;
		}
		n1 += 1;
	}
	putchar('\n');
	return (0);
}
>>>>>>> c75cdbb7d572ee49260a143afb8932923961354c

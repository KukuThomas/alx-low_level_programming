#include "main.h"



/**
 *
 *  * print_alphabet_x10 - print alphabets 10 times
 *
 *   * Description: function uses _putchar function to print
 *
 *    * Return: Always 0
 *
 *     */



void print_alphabet_x10(void)

{

		char i;

			int j;



				for (j = 0; j < 10; j++)

						{

									for (i = 'a'; i <= 'z'; i++)

												{

																_putchar(i);

																		}

											_putchar('\n');

												}

}

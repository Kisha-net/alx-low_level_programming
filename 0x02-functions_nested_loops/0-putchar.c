<<<<<<< HEAD
#include <unistd.h>
#include "main.h"

=======
#include "main.h"
>>>>>>> 694819e4e2a9e06cbb5819e965bdd8fb33a41664
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

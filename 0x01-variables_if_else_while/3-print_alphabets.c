#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase.
 * Return: 0 if successful
 */
int main(void)
{
	char a;
		for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
		for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
		putchar('\n');
	return (0);
}
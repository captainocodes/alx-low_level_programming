#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:  prints the lowercase alphabet in reverse.
 * Return: 0 if successful
 */
int main(void)
{
	char a;
		for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}

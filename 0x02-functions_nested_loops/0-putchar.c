#include "main.h"

/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
int n = 0;
char str_ptc[9] = "_putchar";

while (n < 9)
{
_putchar(str_ptc[n]);
n += 1;
}
_putchar('\n');
return (0);
}

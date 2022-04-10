#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, following by a new line
 * Return: 0 
 */
int main(void)
{
int c = 0;

for (c = 48 ; c <= 57 ; c++)
{
putchar(c);
if (c == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

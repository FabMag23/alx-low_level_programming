#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints all sindle digit number of base 16
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
char c = 'a';
int num;
for (num = 0; num < 16; num++)
{
if (num < 10)
{
putchar(num + '0');
}
else
{
putchar(c);
c++;
}
}
putchar('\n');
return (0);
}

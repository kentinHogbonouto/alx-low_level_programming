#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 *main - function declation
 *@argv: arrays of argument
 *@argc: argument counter
 *Return: always 0
 */

int main(int argc, char **argv)
{
UNUSED(argv);
printf("%d\n", argc -1);
return (0);
}

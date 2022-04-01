#include <stdio.h>
#define UNUSED(x)  (void)(x)

/**
 *main - function
 *
 *@argv: the array of argument
 *@argc: The counter of argument
 *Return: always o
 */

int main(int argc, char **argv)
{
UNUSED(argc);
printf("%s\n", argv[0]);
return (0);
}

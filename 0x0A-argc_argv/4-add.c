#include<stdio.h>
#include<stdlib.h>

/**
 * ft_atoi - function
 *
 * @str: the chaine
 * Return: Always 0.
 */

intft_atoi(const char *str)
{
intn;
intsign;
n = 0;
while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\r' ||*str == '\n' || *str == '\f')
str++;
sign = *str == '-' ? -1 : 1;
if (sign == -1 || *str == '+')
str++;
while (*str)
{
if (*str >= '0' && *str <= '9')
n = n * 10 + (*str - '0');
else
{
printf("Error\n");
exit(EXIT_SUCCESS);
/*break*/
}
str++;
}
return (n * sign);
}

/**
 * main - function
 *
 * @argv: the chaine of chaine
 * @argc: the int
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int i, som = 0, a;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
a = ft_atoi(argv[i]);
if (a >= 0)
som = som + a;
}
printf("%d\n", som);
return (0);
}

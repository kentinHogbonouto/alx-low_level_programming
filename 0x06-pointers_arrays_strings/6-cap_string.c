#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to array of chars.
 * Return: pointer to str.
 */
char *cap_string(char *str)
{
	char separate[] = " \t\n,;.!?\"(){}";
	int i = 0, j;

	for (; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str) += ('A' - 'a');
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (*(str + i - 1) == separate[j])
						*(str + i) += ('A' - 'a');
				}
			}
		}
	}
	return (str);
}

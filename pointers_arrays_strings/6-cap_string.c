#include "main.h"

int is_sep(char ch);
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be processed
 * Description: separators of words use: space, tabulation, new line
 * ,;.!?"(){}
 * Return: string
 */
char *cap_string(char *str)
{
	int x;

	x = 0;
	if (str[x] >= 97 && str[x] <= 122)
		str[x] -= 32;
	for (x = 1; str[x] != '\0'; ++x)
	{
		if (is_sep(str[x - 1]))
			if (str[x] >= 97 && str[x] <= 122)
				str[x] -= 32;
	}
	if (str[x - 1] >= 97 && str[x - 1] <= 122)
		str[x - 1] -= 32;
	return (str);
}

/**
 * is_sep - checks for separator
 * @ch: character to be processed
 * Return: 1 if separator, else 0
 */
int is_sep(char ch)
{
	char sep[] = " \n\t.,;!?\"()[]";
	int x;

	for (x = 0; sep[x] != '\0'; x++)
	{
		if (sep[x] == ch)
			return (1);
	}
	return (0);
}

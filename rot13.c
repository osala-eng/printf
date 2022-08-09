#include "main.h"
/**
 * rot13 - encrypts sing with rot13
 * @list: sing to change
 * Return: modified sing
 */
char *rot13(va_list list)
{
	int i = 0;
	char *s, *ns;

	/* store va_arg to only access argument once */
	s = va_arg(list, char *);

	/* malloc new variable to assign over new rot13 characters */
	ns = malloc(sizeof(char) * (_slen(s) + 1));
	if (ns == NULL)
		return (NULL);

	/* iterate s and assign rot13 char to ns */
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			ns[i] = s[i] + 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			ns[i] = s[i] - 13;
		}
		else
			(ns[i] = s[i]);
		i++;
	}
	ns[i] = '\0';

	return (ns);
}

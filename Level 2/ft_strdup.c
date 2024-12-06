/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*aux;

	dup = malloc(ft_strlen(src) + 1);
	if (!dup)
		return (NULL);
	aux = dup;
	while (*src)
		*dup++ = *src++;
	*dup = '\0';
	return (aux);
}

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
    int		i;

	dup = malloc(sizeof(char) * ft_strlen(src));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i++])
		dup[i] = src[i];
	return (dup);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strdup(argv[1]));
		printf("%s\n", strdup(argv[1]));
	}
	return (0);
}
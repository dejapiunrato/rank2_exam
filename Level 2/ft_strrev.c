/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	while (i < j / 2)
	{
		tmp = str[i];
		str[i] = str[j - 1 - i];
		str[j - 1 - i] = tmp;
		i++;
	}
	return (str);
}

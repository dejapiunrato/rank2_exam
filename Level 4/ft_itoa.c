/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdio.h>
#include <stdlib.h>

int	ft_nbrlen(long int nbr)
{
	int i;

	i = (nbr < 0);
	while (nbr /= 10)
		i++;
	return (i + 1);
}

char	*ft_itoa(int nbr)
{
	int			len;
	char		*str;
	long int	n;

	n = nbr;
	len = ft_nbrlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n < 0)
		n = -n;
	while (len >= 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	if (nbr < 0)
		str[0] = '-';
	if (nbr == 0)
		str[0] = '0';
	return (str);
}

/* int	main()
{
	printf("%s\n", ft_itoa(-0));
	return (0);
} */
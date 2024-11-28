/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>
#include <stdio.h>

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchr((num % 10) + '0');
}

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i = i * 10 + (*str++ - '0');
	return (i);
}

int	ft_isprime(int num)
{
	int	i;

	i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	num;
	int	sum;

	sum = 0;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (num > 1)
		{
			if (ft_isprime(num))
				sum = sum + num;
			num--;
		}
	}
	ft_putnbr(sum);
	ft_putchr('\n');
	return (0);
}

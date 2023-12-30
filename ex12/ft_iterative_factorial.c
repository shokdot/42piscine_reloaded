#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

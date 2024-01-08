/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:02:14 by healeksa          #+#    #+#             */
/*   Updated: 2024/01/08 19:02:14 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:48:57 by britela-          #+#    #+#             */
/*   Updated: 2025/02/19 15:14:07 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			res = res * nb;
			nb --;
		}
	}
	return (res);
}
/*
int main()
{
	int	n;
	int	resu;

	n = 3;
	resu = ft_iterative_factorial(n);

	printf("%d", resu);
	return 0;
}*/

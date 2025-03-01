/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:27:30 by britela-          #+#    #+#             */
/*   Updated: 2025/02/19 13:39:13 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	else
	{
		while (i != power)
		{
			res = res * nb;
			i++;
		}
		return (res);
	}
}
/*
int main()
{
	int nombre;
	int puissance;
	int resu;

	nombre = 5;
	puissance = 5;

	resu = ft_iterative_power(nombre, puissance);

	printf("%d", resu);
	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:31:23 by britela-          #+#    #+#             */
/*   Updated: 2025/02/19 13:56:19 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
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
		return (nb * (ft_recursive_power(nb, power - 1)));
	}
}
/*
int main()
{
	int nombre;
	int puissance;
	int resu;

	nombre = -5;
	puissance = 5;

	resu = ft_recursive_power(nombre, puissance);

	printf("%d", resu);
	return 0;
}*/

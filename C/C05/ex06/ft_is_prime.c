/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:19:58 by britela-          #+#    #+#             */
/*   Updated: 2025/02/18 16:16:30 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
/*
int main()
{
	int res;
	int nombre;

	nombre = 5;

	res = ft_is_prime(nombre);

	printf("%d", res);
	return 0;
}*/

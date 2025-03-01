/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:55:59 by britela-          #+#    #+#             */
/*   Updated: 2025/02/18 16:13:40 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		while ((i * i) <= nb)
		{
			if ((i * i) == nb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
int main()
{
	int	nombre;
	int	res;

	nombre = 2147483647;

	res = ft_sqrt(nombre);

	printf("%d", res);
	return 0;
}*/

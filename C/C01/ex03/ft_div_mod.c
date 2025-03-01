/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:42:40 by britela-          #+#    #+#             */
/*   Updated: 2025/02/04 20:04:46 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	n1;
	int	n2;
	int	div;
	int	mod;

	n1 = 10;
	n2 = 5;
	ft_div_mod(n1, n2, &div, &mod);

	if(div == 2 && mod == 0)
	{
		write(1, "OK", 2);
	}
	else
	{
		write(1,"PAS OK",5);
	}
	return 0;
}*/

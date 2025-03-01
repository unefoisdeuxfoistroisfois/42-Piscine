/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:11:43 by britela-          #+#    #+#             */
/*   Updated: 2025/02/04 20:26:55 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *a;
}
/*
int	main()
{	
	int a;
	int b;
	
	a = 10;
	b = 5;
	ft_ultimate_div_mod(&a, &b);

	if(a == 2 && b == 0)
	{
		write(1,"OK",2);
	}
	else
	{
		write(1,"PAS OK",6);
	}
	return 0;
}*/

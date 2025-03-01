/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:28:42 by britela-          #+#    #+#             */
/*   Updated: 2025/02/04 19:40:44 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main()
{	
	int a;
	int b;

	a = 12;
	b = 3;

	ft_swap(&a, &b);
	if(a == 3 && b == 12)
	{
		write(1,"Inversé",7);
	}
	else
	{
		write(1, "Pas inversé", 11);
	}
	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:20:52 by britela-          #+#    #+#             */
/*   Updated: 2025/02/26 19:21:06 by britela-         ###   ########.fr       */
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


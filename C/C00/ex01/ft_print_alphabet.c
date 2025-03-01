/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:03:59 by britela-          #+#    #+#             */
/*   Updated: 2025/02/08 14:26:42 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		write (1, &lettre, 1);
		lettre++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/

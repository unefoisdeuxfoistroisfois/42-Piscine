/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:21:43 by britela-          #+#    #+#             */
/*   Updated: 2025/02/13 14:33:47 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	taille;
	int	i;

	taille = 0;
	i = 0;
	while (str[taille] != '\0')
	{
		taille++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if (taille == i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
	char *mot;
	int res;

	mot = "";
	res = ft_str_is_numeric(mot);
	
	if(res == 1)
	{
		write(1,"1",1);
	}
	else
	{
		write(1,"0",1);
	}

	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:09:24 by britela-          #+#    #+#             */
/*   Updated: 2025/02/13 14:37:17 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	taille;
	int	i;

	taille = 0;
	i = 0;
	while (str[taille] != '\0')
	{
		taille++;
	}
	while (str[i] >= 'a' && str[i] <= 'z')
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

	mot = "bradley";
	res = ft_str_is_lowercase(mot);
	
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

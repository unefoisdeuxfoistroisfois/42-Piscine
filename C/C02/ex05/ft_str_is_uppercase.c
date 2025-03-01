/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:53:35 by britela-          #+#    #+#             */
/*   Updated: 2025/02/13 14:45:10 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	taille;
	int	i;

	taille = 0;
	i = 0;
	while (str[taille] != '\0')
	{
		taille++;
	}
	while (str[i] >= 'A' && str[i] <= 'Z')
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

	mot = "BRADLEU";
	res = ft_str_is_uppercase(mot);
	
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

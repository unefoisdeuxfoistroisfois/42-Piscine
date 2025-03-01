/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:34:20 by britela-          #+#    #+#             */
/*   Updated: 2025/02/18 17:39:57 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	valeurabs;
	int	res;

	i = 0;
	while ((str[i] >= 9 && str[i] < 14) || str[i] == 32)
	{
		i++;
	}
	valeurabs = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			valeurabs = -valeurabs;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 +(str[i] - 48);
		i++;
	}
	res = res * valeurabs;
	return (res);
}
/*
int main()
{
	char *chaine;
	int res;

	chaine = "     	---+-+15675gfdg3157";
	res = ft_atoi(chaine);

	printf("%d",res);

	return 0;
}*/

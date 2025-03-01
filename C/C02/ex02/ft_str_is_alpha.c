/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:44:17 by britela-          #+#    #+#             */
/*   Updated: 2025/02/12 17:46:20 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	taille;
	int	i;

	taille = 0;
	while (str[taille] != '\0')
	{
		taille++;
	}
	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'z')
		|| (str[i] >= 'A' && str[i] <= 'Z'))
	{
		i++;
	}
	if (i == taille)
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

	mot = "Bradley";
	res = ft_str_is_alpha(mot);

	if(res == 1)
	{
		write(1,"1",1);
	}
	else
	{
		write (1,"0",1);
	}
	return 0;
}*/

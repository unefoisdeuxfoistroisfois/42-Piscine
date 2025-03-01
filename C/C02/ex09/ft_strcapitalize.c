/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:15:25 by britela-          #+#    #+#             */
/*   Updated: 2025/02/12 17:33:29 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_precedent(char precedent)
{
	return (!((precedent >= 'a' && precedent <= 'z')
			|| (precedent >= 'A' && precedent <= 'Z')
			|| (precedent >= '0' && precedent <= '9')));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] -32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (ft_precedent(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] -32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char mot[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *res;

	res = ft_strcapitalize(mot);
	
	printf("%s", res);
	return 0;
}*/

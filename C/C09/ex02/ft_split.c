/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:09:20 by britela-          #+#    #+#             */
/*   Updated: 2025/02/27 19:16:29 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	calculchaine(char *str, char *sep)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while(str[i] != '\0')
	{
		if(ft_strncmp(&str[i], sep) == 0)
		{
			temp++;	
		}else
		{
			i++;
		}
	}
	return (i);
}

void	**ft_split(char *str, char *charset)
{
	int	**tab;
	int	taille = calculchaine(str, charset);

	tab = malloc(sizeof(char) * (taille + 1));// calcul de la taille des mots ensmble.

	int	i;

	i = 0;
	while(str[i] != NULL)
	{
		if()
	}
}

int main()
{
	char	*mot;
	char	*sep;

	char	**res;

	mot = "Bradley|||vien|||demain";
	sep = "|||";

	ft_split(mot, sep);
	return 0;
}

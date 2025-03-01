/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:45:21 by britela-          #+#    #+#             */
/*   Updated: 2025/02/24 17:33:13 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	calcul_taille_complete(int size, char **strs, char *sep)
{
	int	i;
	int	taillecomplet;

	i = 0;
	taillecomplet = 0;
	while (i < size)
	{
		taillecomplet = taillecomplet + ft_strlen(strs[i]);
		if (i < size -1)
		{
			taillecomplet = taillecomplet + ft_strlen(sep);
		}
		i++;
	}
	return (taillecomplet);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*resultat;
	int		taillecomplet;

	if (size == 0)
	{
		resultat = malloc(sizeof(char));
		if (resultat == NULL)
			return (NULL);
		resultat[0] = '\0';
		return (resultat);
	}
	taillecomplet = calcul_taille_complete(size, strs, sep);
	resultat = malloc(sizeof(char) * (taillecomplet + 1));
	if (resultat == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(resultat, strs[i]);
		if (i < size -1)
			ft_strcat(resultat, sep);
		i++;
	}
	return (resultat);
}
/*
int	main()
{
	int taille;
	char *mot[] = {"Brad", "le", "bg"};
	char *sep;
	char *res;

	sep = "!!!";
	taille = 3;

	res = ft_strjoin(taille, mot, sep);

	printf("%s", res);
	return 0;
}*/

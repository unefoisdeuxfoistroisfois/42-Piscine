/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:15:14 by britela-          #+#    #+#             */
/*   Updated: 2025/02/13 15:30:02 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return (0);
	}
	j = 0;
	while (src[j] != '\0' && j < size - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

/* int	main(void)
{
	char	*mot;
	char	mot1[7];
	int		taille;
	int		res;

	mot = "Zakaria";
	taille = 3;
	res = ft_strlcpy(mot1, mot, taille);
	printf("%s", mot1);
	printf("%d", res);
	return (0);
}*/

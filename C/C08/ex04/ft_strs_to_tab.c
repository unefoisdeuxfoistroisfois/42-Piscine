/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:54:51 by britela-          #+#    #+#             */
/*   Updated: 2025/02/26 15:01:54 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strcpy(char *str, int size)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (i < size)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char *argv[])
{
	t_stock_str	*stocks;
	int			i;

	stocks = malloc(sizeof (t_stock_str) * (argc + 1));
	if (stocks == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < argc)
	{
		stocks[i].size = ft_strlen(argv[i]);
		stocks[i].str = argv[i];
		stocks[i].copy = ft_strcpy(argv[i], stocks[i].size);
		i++;
	}
	stocks[i].size = 0;
	stocks[i].str = NULL;
	stocks[i].copy = NULL;
	return (stocks);
}

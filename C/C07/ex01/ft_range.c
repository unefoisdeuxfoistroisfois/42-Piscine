/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:54:19 by britela-          #+#    #+#             */
/*   Updated: 2025/02/22 19:10:38 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tableau;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	tableau = malloc(sizeof(int) * (max - min));
	if (tableau == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		tableau[i] = min;
		min++;
		i++;
	}
	return (tableau);
}
/*
int main()
{
	int minimum;
	int maximum;
	int *res;

	minimum = 3;
	maximum = 10;
	res = ft_range(minimum, maximum);

	int 	i;

	i = 0;
	while(i < (maximum - minimum))
	{
		printf("%d \n", res[i] );
		i++;
	}

	return 0;
}*/

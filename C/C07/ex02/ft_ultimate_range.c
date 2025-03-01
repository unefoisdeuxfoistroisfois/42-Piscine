/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:36:32 by britela-          #+#    #+#             */
/*   Updated: 2025/02/23 16:19:33 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tableau;
	int	i;
	int	*temp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tableau = malloc(sizeof(int) * (max - min));
	if (tableau == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min <= max -1)
	{
		tableau[i] = min;
		min++;
		i++;
	}
	temp = tableau;
	*range = temp;
	return (i);
}
/*
int main()
{
	int minimum;
	int maximum;
	int *tab;
	int res;

	minimum = 3;
	maximum = 10;
	res = ft_ultimate_range(&tab, minimum, maximum);

	int 	i;

	i = 0;
	while(i < res)
	{
		printf("%d \n", tab[i] );
		i++;
	}
	
	printf("la taill est de : %d", res);
	return 0;
}*/		

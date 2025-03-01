/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:23:21 by britela-          #+#    #+#             */
/*   Updated: 2025/02/26 19:23:33 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
	char *mot;
	char *mot1;
	int res;
	
	mot = "Bfradley";
	mot1 = "Bradley";

	res = ft_strcmp(mot, mot1);
	
	if(res > 0)
	{
		printf("%d", res);
	}
	else if(res == 0)
	{
		printf("%d", res);
	}
	else if(res < 0)
	{
		printf("%d", res);
	}
	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:29:43 by britela-          #+#    #+#             */
/*   Updated: 2025/02/17 18:17:52 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && (i < n - 1))
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
	int taille;
	int res;

	mot = "Bradley";
	mot1 = "B radley";
	taille = 2;

	res = ft_strncmp(mot, mot1, taille);

	if (res > 0)
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

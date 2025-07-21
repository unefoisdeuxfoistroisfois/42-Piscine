/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:23:47 by britela-          #+#    #+#             */
/*   Updated: 2025/07/21 16:37:37 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list	*maillon;

	maillon = malloc(sizeof(t_list));
	if (maillon == NULL)
	{
		return (NULL);
	}
	maillon->data = data;
	maillon->next = NULL;

	return (maillon);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*maillon;

	maillon = ft_create_elem(data);
	maillon->next = *begin_list;
	*begin_list = maillon;
}

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

int	main()
{
	char	*mot;
	char	*mot1;
	char	*mot2;
	char	*mot3;
	t_list	*liste;
	int	resultatstaille;

	mot = "Bradley";
	mot1 = "Alfrede";
	mot2 = "Divina";
	mot3 = "Noé";
	liste = NULL;

	ft_list_push_front(&liste, mot);
	ft_list_push_front(&liste, mot1);
	ft_list_push_front(&liste, mot2);
	ft_list_push_front(&liste, mot3);

	resultatstaille = ft_list_size(liste);

	printf("La taille de la chaine est de : %d\n", resultatstaille);

	while (liste != NULL)
	{
		printf(" [%s] ", (char *)liste->data);
		if (liste->next != NULL)
		{
			printf("->");
		}
		liste = liste->next;
	}

	return(0);
}

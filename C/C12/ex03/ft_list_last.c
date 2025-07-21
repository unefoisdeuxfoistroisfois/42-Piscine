/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:01:12 by britela-          #+#    #+#             */
/*   Updated: 2025/07/21 18:50:48 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

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
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*dernierelem;

	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	dernierelem = begin_list;

	return (dernierelem);
}

int	main()
{
	char	*mot;
	char	*mot1;
	char	*mot2;
	char	*mot3;
	t_list	*liste;
	int	resultatstaille;
	t_list	*resultatsdernierliste;

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
	resultatsdernierliste = ft_list_last(liste);


	printf("La taille de la chaine est de : %d\n", resultatstaille);
	if (resultatsdernierliste != NULL)
	{
		printf("Le derniere element de la chaine est : %s\n", (char
		*)resultatsdernierliste->data);
	}

	t_list	*temp;

	temp = liste;
	while (temp != NULL)
	{
		printf(" [%s] ", (char *)temp->data);
		if (temp->next != NULL)
		{
			printf("->");
		}
		temp = temp->next;
	}

	return(0);
}

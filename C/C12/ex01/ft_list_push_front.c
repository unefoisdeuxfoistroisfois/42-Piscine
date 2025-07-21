/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:49:22 by britela-          #+#    #+#             */
/*   Updated: 2025/07/21 14:48:46 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*noeud;

	noeud = malloc(sizeof(t_list));
	if (noeud == NULL)
	{
		return (NULL);
	}
	noeud->data = data;
	noeud->next = NULL;

 	return (noeud);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*noeudavant;

	noeudavant = ft_create_elem(data);
	noeudavant->next = *begin_list;
	*begin_list = noeudavant;
}

int	main()
{
	char	*mot;
	char	*mot1;
	char	*mot2;
	char	*mot3;
	t_list	*resultatlist;

	mot = "Bradley";
	mot1 = "Alfrede";
	mot2 = "Divina";
	mot3 = "Noé";
	resultatlist = NULL;

	ft_list_push_front(&resultatlist, mot);
	ft_list_push_front(&resultatlist, mot1);
	ft_list_push_front(&resultatlist, mot2);
	ft_list_push_front(&resultatlist, mot3);

	while(resultatlist != NULL)
	{
		printf("[%s]", (char *)resultatlist->data);
		resultatlist = resultatlist->next;
	}
	return(0);
}

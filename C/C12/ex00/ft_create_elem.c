/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:09:00 by britela-          #+#    #+#             */
/*   Updated: 2025/07/20 17:27:35 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_create_elem(void *data)
{
	t_list	*noeud;

	//allouer de la memoir pour notre neoud
	noeud = malloc(sizeof(t_list));
	if (noeud == NULL)
	{
		return (NULL);
	}
	//definir notre noeud avec elem actuel et le suivant
	noeud->data = data;
	noeud->next = NULL;
	return (noeud);
}

int	main()
{
	char	*mot;
	t_list	*resultats;

	mot = "Bradley";
	resultats = ft_create_elem(mot);
	
	printf("%s", (char *)resultats->data);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 19:53:43 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 18:03:22 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"
#include <stdio.h>

int	main(void)
{
	int		i;
	t_node	*datas;

	datas = NULL;
	i = get_datas(&datas);
	printf("Nombre de parametres stockes : %d\n", i);	
	ft_putendl("Arbre :");
	printNode(datas);
	printf("Recherche :\n");	
	i = retrieveKeyword(&datas);
	printf("Nombre de mot-cles recherches : %d\n", i);
	clearNode(&datas);
	return (0);
}



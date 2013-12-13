/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 19:53:43 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/13 23:08:19 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

int	main(void)
{
	t_node	*datas;

	datas = NULL;
	addNode(&datas, "Biscuits", "Cacahuetes");
	addNode(&datas, "Fruits", "Bananes");
	addNode(&datas, "Vetements", "Chaussures");
	addNode(&datas, "Machine", "Distributeur");

	printNode(datas);
	clearNode(&datas);
	return (0);
}



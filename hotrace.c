/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 19:53:43 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 18:25:46 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"
#include <stdio.h>

int	main(void)
{
	t_node	*datas;

	datas = NULL;
	get_datas(&datas);
	retrieveKeyword(&datas);
	clearNode(&datas);
	return (0);
}



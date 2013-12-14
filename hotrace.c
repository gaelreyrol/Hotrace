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
	
	clock_t	start, end;

	datas = NULL;
	start = clock();
	get_datas(&datas);
	end = clock();
	printf("get_datas : %f\n",(end - start) / (float)CLOCKS_PER_SEC);
	start = clock();
	retrieveKeyword(&datas);
	end = clock();
	printf("retrieveKeyword : %f\n", (end - start) / (float)CLOCKS_PER_SEC);
	start = clock();
	clearNode(&datas);
	end = clock();
	printf("clearNode : %f\n", (end - start) / (float)CLOCKS_PER_SEC);
	return (0);
}



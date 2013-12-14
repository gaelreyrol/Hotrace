/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:05:53 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 14:53:04 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = NULL;
	ptr = (void *) malloc(size);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);
}

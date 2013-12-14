/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:20:43 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 15:02:33 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memset(void *string, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)string;
	while (n > 0)
	{
		*tmp = c;
		tmp++;
		n--;
	}
	return (string);
}

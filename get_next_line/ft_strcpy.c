/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:53:02 by greyrol           #+#    #+#             */
/*   Updated: 2013/11/19 15:53:04 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strcpy(char *dest, const char *str)
{
	char        *tmp;

	tmp = dest;
	while (*str != '\0')
	{
		*dest = *str;
		dest = dest + 1;
		str = str + 1;
	}
	*dest = '\0';
	return (tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:47:11 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 14:54:16 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *str)
{
	char	*result;
	size_t	size;

	size = ft_strlen(str) + 1;
	result = (char *) malloc(sizeof(char) * size);
	if (!result)
		result = NULL;
	else
		ft_strcpy(result, str);
	return (result);
}

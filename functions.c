/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 20:45:34 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 13:48:16 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int) *s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

void	ft_putendl(char *str)
{
	if (str)
		ft_putstr(str);
	ft_putstr("\n");
}


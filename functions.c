/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 20:45:34 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/15 14:40:59 by greyrol          ###   ########.fr       */
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

void	ft_putstr(char *str, int len)
{
	if (str && len)
		write(1, str, len);
}

void	ft_putendl(char *str, int len)
{
	if (str && len)
		ft_putstr(str, len);
	ft_putstr("\n", 1);
}


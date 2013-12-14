/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 19:53:53 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 18:03:22 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
#include <stdio.h>
#include <time.h>

# include "tree.h"
# include "get_next_line.h"

int		ft_strcmp(const char *s1, const char *s2);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putstr(char *str);
void	ft_putendl(char *str);

#endif /* !HOTRACE_H */


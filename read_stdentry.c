/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdentry.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: birousse <birousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 21:33:02 by birousse          #+#    #+#             */
/*   Updated: 2013/12/15 14:50:31 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

int		retrieveKeyword(t_node **tree)
{
	char	*line;
	char	*keyword;
	char	*value;
	int		i;

	i = 0;
	keyword = NULL;
	while (get_next_line(0, &line) > 0)
	{
		if (line && (ft_strcmp(line, "")))
		{
			keyword = ft_strdup(line);
			if ((value = searchValue(*tree, keyword)) != NULL)
				ft_putendl(value, ft_strlen(value));
			else
			{
				ft_putstr(keyword, ft_strlen(keyword));
				ft_putendl(": Not found.", 12);
			}
			i++;
		}
	}
	return (i);
}

int			get_datas(t_node **tree)
{
	int	i;

	i = 0;
	while (read_datas(tree) > 0)
		i++;
	return (i);
}

int			read_datas(t_node **tree)
{
	char 	*keyword;
	char 	*value;
	char	*line;

	keyword = NULL;
	value = NULL;
	while (get_next_line(0, &line) > 0)
	{
		if (line && (ft_strcmp(line, "")))
		{
			keyword = ft_strdup(line);
			get_next_line(0, &line);
		}
		if (line && (ft_strcmp(line, "")))
		{
			value = ft_strdup(line);
			*tree = addNode(*tree, keyword, value);
			return (1);
		}
		return (-1);
	}
	return (-1);
}

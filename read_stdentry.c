/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdentry.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: birousse <birousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 21:33:02 by birousse          #+#    #+#             */
/*   Updated: 2013/12/14 14:49:25 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

int			read_stdentry(t_node *tree)
{
	char 	*keyword;
	char 	*value;
	char	*line;

	keyword = NULL;
	value = NULL;
	while (get_next_line(0, &line) > 0)
	{
		line = keyword;
		get_next_line(0, &line);
		if (line)
			line = value;
		addNode(tree, keyword, value);
		return (1);
	}
	return (0);
}

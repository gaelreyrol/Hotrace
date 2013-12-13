/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 20:20:24 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/13 22:43:14 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H

# include "hotrace.h"

typedef struct	s_node
{
	char			*keyword;
	char			*value;
	struct s_node	*right;
	struct s_node	*left;
}				t_node;

void	addNode(t_node **tree, char *keyword, char *value);
char	*searchValueByKeyword(t_node *tree, char *keyword);
void	printNode(t_node *tree);
void	clearNode(t_node **tree);

#endif /* !TREE_H */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 20:20:24 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 18:08:28 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H

# include "hotrace.h"

typedef struct	s_node
{
	char			*keyword;
	char			*value;
	int				height;
	struct s_node	*right;
	struct s_node	*left;
}				t_node;


int		retrieveKeyword(t_node **tree);
int		get_datas(t_node **tree);
int		read_datas(t_node **tree);

t_node	*initNode(char *keyword, char *value, t_node *left, t_node *right);
t_node	*addNode(t_node *tree, char *keyword, char *value);
char	*searchValue(t_node *tree, char *keyword);
void	printNode(t_node *tree);
void	clearNode(t_node **tree);

int		getNHeight(t_node *tree);
void	setNHeight(t_node *tree);
t_node	*rotateNLeft(t_node *tree);
t_node	*rotateNRight(t_node *tree);
t_node	*balanceNode(t_node *tree);

#endif /* !TREE_H */

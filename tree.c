/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 20:19:55 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/15 14:40:25 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

t_node	*initNode(char *keyword, char *value, t_node *left, t_node *right)
{
	t_node *element;

	element = (t_node *) malloc(sizeof(t_node));
	element->keyword = keyword;
	element->value = value;
	element->left = left;
	element->right = right;
	setNHeight(element);
	return (element);
}

t_node	*addNode(t_node *tree, char *keyword, char *value)
{
	if (tree == NULL)
		return (initNode(keyword, value, NULL, NULL));
	if (ft_memcmp(tree->keyword, keyword, sizeof(keyword)) > 0)
		tree->left = addNode(tree->left, keyword, value);
	else if (ft_memcmp(tree->keyword, keyword, sizeof(keyword)) < 0)
		tree->right = addNode(tree->right, keyword, value);
	else
		tree->value = value;
	return (balanceNode(tree));
}

char	*searchValue(t_node *tree, char *keyword)
{
	while (tree)
	{
		if (ft_memcmp(tree->keyword, keyword, sizeof(keyword)) > 0)
			tree = tree->left;
		else if (ft_memcmp(tree->keyword, keyword, sizeof(keyword)) < 0)
			tree = tree->right;
		else if (ft_memcmp(tree->keyword, keyword, sizeof(keyword)) == 0)
			return (tree->value);
	}
	return (NULL);
}

void	clearNode(t_node **tree)
{
	t_node	*tmpTree;

	if (*tree)
	{
		tmpTree = *tree;
		if (tmpTree->left)
			clearNode(&tmpTree->left);
		free(tmpTree);
		if (tmpTree->right)
			clearNode(&tmpTree->right);
		*tree = NULL;
	}
}


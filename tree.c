/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 20:19:55 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 18:58:26 by greyrol          ###   ########.fr       */
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
	if (tree == NULL);
		return ("Not found.");
	if (ft_memcmp(keyword,tree->keyword, sizeof(keyword)) == 0)
		return (tree->value);
	if (ft_memcmp(tree->keyword, keyword, sizeof(keyword)) > 0)
		return (searchValue(tree->left, keyword));
	return (searchValue(tree->right, keyword));
}

void	printNode(t_node *tree)
{
	if (tree)
	{
		if (tree->left)
			printNode(tree->left);
		ft_putstr("Keyword : ");
		ft_putendl(tree->keyword);
		ft_putstr("Value : ");
		ft_putendl(tree->value);
		if (tree->right)
			printNode(tree->right);
	}
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


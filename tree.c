/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 20:19:55 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/13 23:25:20 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

void	addNode(t_node **tree, char *keyword, char *value)
{
	t_node	*tmpNode;
	t_node	*tmpTree;
	t_node	*element;

	tmpTree = *tree;
	element = (t_node *) malloc(sizeof(t_node));
	element->keyword = keyword;
	element->value = value;
	element->right = NULL;
	element->left = NULL;
	while (tmpTree)
	{
		tmpNode = tmpTree;
		if (ft_strcmp(tmpTree->keyword, keyword) > 0)
		{
			tmpTree = tmpTree->right;
			if (!tmpTree)
				tmpNode->right = element;
		}
		else
		{
			tmpTree = tmpTree->left;
			if (!tmpTree)
				tmpNode->left = element;
		}
	}
	if (!tmpTree)
		*tree = element;
}

char	*searchValueByKeyword(t_node *tree, char *keyword)
{
	if (tree)
	{
		if (tree->keyword == keyword)
			return (tree->value);
		if (ft_strcmp(tree->keyword, keyword) > 0)
			searchValueByKeyword(tree->right, keyword);
		else
			searchValueByKeyword(tree->left, keyword);
	}
	return (NULL);
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


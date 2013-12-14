/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treeTools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 10:31:06 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 11:35:38 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

int	getNHeight(t_node *tree)
{
	return ((tree == NULL) ? -1 : tree->height);
}

void	setNHeight(t_node *tree)
{
	int	leftH;
	int	rightH;

	leftH = getNHeight(tree->left);
	rightH = getNHeight(tree->right);
	tree->height = 1 + ((leftH > rightH) ? leftH : rightH);
}

t_node	*rotateNLeft(t_node *tree)
{
	t_node	*tmpTree;

	tmpTree = tree->right;
	tree->right = tmpTree->left;
	tmpTree->left = tree;
	setNHeight(tmpTree->left);
	setNHeight(tmpTree);
	return (tmpTree);
}

t_node *rotateNRight(t_node *tree)
{
	t_node	*tmpTree;

	tmpTree = tree->left;
	tree->left = tmpTree->right;
	tmpTree->right = tree;
	setNHeight(tmpTree->right);
	setNHeight(tmpTree);
	return (tmpTree);

}

t_node	*balanceNode(t_node *tree)
{
	setNHeight(tree);
	if (getNHeight(tree->left) - getNHeight(tree->right) == 2)
	{
		if (getNHeight(tree->left->left) < getNHeight(tree->left->right))
			tree->left = rotateNLeft(tree->left);
		return (rotateNRight(tree));
	}
	if (getNHeight(tree->left) - getNHeight(tree->right) == -2)
	{
		if (getNHeight(tree->right->right) < getNHeight(tree->right->left))
			tree->right = rotateNRight(tree->right);
		return (rotateNLeft(tree));
	}
	return (tree);
}


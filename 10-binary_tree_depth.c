#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 If tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
	{
		return (0);
	}
	d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->parent;
	}
	return (d - 1);
}

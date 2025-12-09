#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of node
 * @tree: pointer to tree
 *
 * Return: depth of parent + 1 on success and 0 on fail
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}

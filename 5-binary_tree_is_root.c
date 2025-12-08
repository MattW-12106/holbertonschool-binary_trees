#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is the root node
 * @node: pointer to node
 * Return: 0 on fail, 1 on success
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with children
 * @tree: pointer to tree
 *
 * Return: number of nodes with child on success, 0 on fail
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}

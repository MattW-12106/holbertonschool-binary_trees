#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a tree
 * @tree: pointer to tree
 *
 * Return: number of leaves plus 1 on sucess, 0 and 1 for fail
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

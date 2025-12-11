#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to tree
 * Return: if full, 0 and 1 on fail
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

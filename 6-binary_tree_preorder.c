#include "binary_trees.h"

/**
 * binary_tree_preorder - visits all nodes in preorder traversal
 * @tree: pointer to the tree
 * @func: pointer to the traversal function
 * Return: return if fail
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

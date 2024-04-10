#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: If tree is NULL, must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: if the tree is NULL, must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lef = 0, rig = 0;

	if (tree)
	{
		lef = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;

		rig = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;
		return (lef > rig ? lef : rig);
	}
	return (0);
}

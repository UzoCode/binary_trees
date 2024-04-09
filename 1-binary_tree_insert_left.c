#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: a pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *
 *Return: a pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *fresh;

	if (parent == NULL)
		return (NULL);

	fresh = binary_tree_node(parent, value);
	if (fresh == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		fresh->left = parent->left;
		parent->left->parent = fresh;
	}
	parent->left = fresh;

	return (fresh);
}

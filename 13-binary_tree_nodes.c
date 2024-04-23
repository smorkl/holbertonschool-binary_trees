#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - function that counts the nodes w/ atleast
 * 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count
 * the number of nodes.
 *
 * Return: NULL pointer is not a node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = (0);

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		nodes += (1);
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}

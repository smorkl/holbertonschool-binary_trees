#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_balance - function that measures the balance
  * factor of a binary tree
  *
  * @tree: is a pointer to the root node of the tree
  * to measure the balance factor
  *
  * Return: return balance node
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftbalance = 0, rightbalance = 0;

	if (tree == NULL)
		return (0);


	leftbalance = binary_tree_height(tree->left);
	rightbalance = binary_tree_height(tree->right);
	return (leftbalance - rightbalance);
}

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 * Return: size_t representing height, 0 on failure or NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
		return (0);

	left_size += 1 + binary_tree_height(tree->left);
	right_size += 1 + binary_tree_height(tree->right);
	if (left_size > right_size)
		return (left_size);

	return (right_size);
}

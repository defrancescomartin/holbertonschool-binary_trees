#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect 0 otherwise
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t ladoIzq, ladoDer;

	if (tree == NULL)
		return (0);

	ladoIzq = binary_tree_size(tree->left);
	ladoDer = binary_tree_size(tree->right);
	if (ladoIzq == ladoDer)
		return (1);

	return (0);
}

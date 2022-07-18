#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: node to find the sibling
 * Return: a pointer to the uncle node
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}

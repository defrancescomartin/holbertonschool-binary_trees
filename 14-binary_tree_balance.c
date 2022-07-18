#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of measure the height
 * Return: height of the tree
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (!(tree->left) && !(tree->right))
		return (0);
	left_height = binary_tree_height(tree->left);
	left_height++;
	right_height = binary_tree_height(tree->right);
	right_height++;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: balance factor
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_heigth = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL)
	{
		right_height = right_height - 1;
	}
	else
	{
		right_height = binary_tree_height(tree->right);
	}
	if (tree->left == NULL)
	{
		left_heigth = left_heigth - 1;
	}
	else
	{
		left_heigth = binary_tree_height(tree->left);
	}
	return (left_heigth - right_height);
}

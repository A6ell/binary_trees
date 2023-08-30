#include <stdlib.h>
#include "binary_trees.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: the value to exponentiate
 *@y: the power to raise x to
 *Return: x to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}

/**
* binary_tree_size - Measures the size of a binary tree.
* @tree: Pointer to the root node of the tree to measure the size.
*
* Return: Size of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* Add 1 for the current node */
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}


/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree.
*
* Return: Height of the tree, or 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

/* Return the larger of the two subtrees */
return (left_height > right_height ? left_height : right_height);
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: Pointer to the root node of the tree to check.
*
* Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left, right;

if (tree == NULL)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

if (left == right)
return (1);
return (0);
}

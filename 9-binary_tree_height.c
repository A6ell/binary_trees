#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree to measure the height.
*
* Return: Height of the binary tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height = 0;

if (!tree)
return (0);

left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

/* Return the larger of the two subtrees */
return (1 + (left_height > right_height ? left_height : right_height));
}

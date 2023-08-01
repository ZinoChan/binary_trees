#include "binary_trees.h"

/**
 * binary_tree_balance -balance factor
 * @tree: Pointer to root
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int l_height, r_height;

    if (tree == NULL)
        return (0);

    l_height = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
    r_height = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

    return (l_height - r_height);
}

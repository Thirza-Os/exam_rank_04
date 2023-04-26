#include <unist.h>
#include <stdio.h>

t_btree    *insert_node(value)
{
    t_btree *node = (btree *)malloc(sizeof(t_btree))
    if (node == NULL)
        return(NULL)
    node->left = 0;
    node->right = 0;
    node->content = value;
    return(node);
}

t_btree *insert_binary_tree(t_btree *root, int value)
{
    t_btree *current = root;

    if (root == NULL)
    {
        root = insert_node(value);
        return(root);
    }
    if (root->content > value | root->content == value)
    {
        while(curr->right)
            curr = curr->right;
        curr->right = insert_node(value);
        return(curr->right);
    }
    else if (root->content < value | root->content == value)
    {
        while(curr->left)
            curr = curr->left;
        curr->left = insert_node(value);
        return (curr->left);
    }

    return (root);
}
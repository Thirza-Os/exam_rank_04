#include <unistd.h>
#include <stdio.h>

t_btree *new_node(int value)
{
    t_btree *new_node = (t_btree*)malloc(sizeof(b_tree));
    if (new_node == NULL)
        return(NULL);
    new_node->left = 0;
    new_node->right = 0;
    new_node->content = value;
    return(new_node);
}

t_btree *insert_binary_tree(t_btree *root, int value)
{
    t_btree *new_node = new_node(value);

    t_btree *current = root;
    if (current == NULL)
        return(new_node)
    if (current->content > value)
    {
        while (current != NULL)
            current = current->right
        current->right = new_node(value);
    }
    if (current->content < value)
    {
        while (current != NULL)
            current = current->left
        current->left = new_node(value);
    }
}
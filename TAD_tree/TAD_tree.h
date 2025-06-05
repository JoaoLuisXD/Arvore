#ifndef __TAD_TREE_H__
    #define __TAD_TREE_H__

#include<stdio.h>
#include<stdlib.h>

struct node
{
    void * info;
    struct node * lst;
    struct node * rst;
};
typedef struct node Node;

int tree_empty(Node* root);
Node* tree_create_empty();
Node* tree_create_node(void* info, Node* lst, Node* rst);
int tree_insert_node(Node* root, Node* new_node, int (compare)(void*, void*));
void tree_free(Node* root);
void tree_map(Node* root, void (operation)(void*));
Node* tree_filter(Node* root, int (condition)(void*));
Node* tree_search(Node* root, int (condition)(void*));Node * tree_create_empty();


    #include "TAD_tree.c"
#endif
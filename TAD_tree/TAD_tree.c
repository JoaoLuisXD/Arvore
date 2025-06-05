#include "TAD_tree.h"

/*  
*/
Node * tree_create_empty();
/*  
*/
Node * tree_insert(void * info, Node * lst, Node *rst);
/*  
*/
int tree_empty(Node * root);
/*  
*/
void tree_free(Node * root);
/*  
*/
void tree_map(Node * root, void(operation)(void*));
/*  
*/
Node * tree_filter(Node *root, int condition(void*));
/*  
*/
Node * tree_search(Node * root, int(condition)(void*));
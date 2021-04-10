#include <stdbool.h>

typedef struct node {
    void            *value;
    struct node     *next;
} node;

node *create_node(void *val);
node *append_node(node *n, void *val);
node *push_node(node **n, void *val);
node *create_linkedlist(void **arr, unsigned int size);
int add_node(node *n, void *val, unsigned int index);
void *pop_node(node **n);
void *rightpop_node(node *n);
void *removei_node(node **n, unsigned int index);
void *remove_node(node **n, void *val);
void *get_node(node *n, unsigned int index);
void clear_nodes(node **n);
void print_nodes(node *n);
bool contains_node(node *n, void *val);
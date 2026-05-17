#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdlib.h>

typedef struct int_node
{
	int data;
	struct int_node* next;
} int_node;

int_node* int_create_node(int data, int_node* prev_node);

int_node* int_add_node_after(int data, int index, int prev_index, int_node* cur_node);

int_node* int_add_node_before(int data, int index, int prev_index, int_node* prev_node, int_node* cur_node);

int int_get_node(int index, int prev_index, int_node* cur_node);

void int_free_node(int index, int prev_index, int_node* cur_node);


#endif // Linked list

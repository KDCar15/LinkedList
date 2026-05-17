#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

typedef struct int_ll
{
	int_node* begin;
	int_node* end;
	int size;	
} int_ll;

int_ll* int_ll_create();

int_node* int_ll_addnode_atend(int_ll* ll, int data);

int_node* int_ll_addnode_atbegin(int_ll* ll, int data);

int_node* int_ll_addnode_after(int_ll* ll, int data, int index);

int_node* int_ll_addnode_before(int_ll* ll, int data, int index);

void int_ll_freenode(int_ll* ll, int index);

#endif // LINKED_LIST_H

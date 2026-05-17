#include "linkedlist.h"

int_ll* int_ll_create()
{
	int_ll* output = (int_ll*)malloc(sizeof(int_ll));
	output->begin = NULL;
	output->end = NULL;
	output->size = 0;
	return output;
}

int_node* int_ll_addnode_atend(int_ll* ll, int data)
{
	ll->size++;
	if(ll->end)
		ll->end = int_add_node_after(data, 0, 0, ll->end);
	else
		ll->begin = int_create_node(data, NULL);
		ll->end = ll->begin;
	return ll->end;
}

int_node* int_ll_addnode_atbegin(int_ll* ll, int data)
{
	ll->size++;
	if(ll->begin)
		ll->begin = int_add_node_before(data, 0, 0, ll->begin);
	else
		ll->begin = int_add_node_before(data, 0, 0, ll->begin);
		ll->end = ll->begin;
	return ll->begin;
}

int_node* int_ll_addnode_after(int_ll* ll, int data, int index)
{
	ll->size++;
	int_node* node = int_add_node_after(data, index, 0, ll->begin);
	if (index == ll->size)
		ll->end = node;
	return node;
}

int_node* int_ll_addnode_before(int_ll* ll, int data, int index)
{
	ll->size++;
	int_node* node = int_add_node_before(data, index, 0, ll->begin);
	if (index == 0)
		ll->begin = node;
	return node;
}

void int_ll_freenode(int_ll* ll, int index)
{
	int_free_node(index, 0, ll->begin);
	ll->size--;	
}

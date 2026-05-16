#include "linkedlist.h"

int_node* int_create_node(int data, int_node* prev_node)
{
	int_node* node = (int_node*)malloc(sizeof(int_node));

	if(!node){
		return NULL;
	}

	node->data = data;
	if(prev_node)
		prev_node->next = node;
	return node;
}

int int_get_node(int index, int prev_index, int_node* cur_node){
	if(prev_index == index)
		return cur_node->data;

	if(cur_node->next == NULL)
	       	return 0;

	prev_index++;
	return int_get_node(index, prev_index, cur_node->next);
}

void int_free_node(int index, int prev_index, int_node* cur_node)
{
	if(prev_index == index){	
		free(cur_node);
		return;
	}

	if(!cur_node->next)
	       	return;
	
	if(prev_index + 1 == index){
		int_node* temp = cur_node->next->next;
		free(cur_node->next);
		cur_node->next = temp;
		return;
	}

	prev_index++;
	int_free_node(index, prev_index, cur_node->next);	
}


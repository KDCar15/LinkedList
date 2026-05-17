#include "linkedlist.h"

int_node* int_create_node(int data, int_node* prev_node)
{
	int_node* node = (int_node*)malloc(sizeof(int_node));

	if(!node){
		return NULL;
	}

	node->data = data;
	node->next = NULL;
	if(prev_node)
		prev_node->next = node;
	return node;
}

int_node* int_add_node_after(int data, int index, int prev_index, int_node* cur_node){
	if(prev_index == index){
		int_node *temp = cur_node->next;
		int_node *node = int_create_node(data, cur_node);
		node->next = temp;
		return node;
	}
	
	if(cur_node->next == NULL)
	       	return NULL;

	prev_index++;
	return int_add_node_after(data, index, prev_index, cur_node->next);
}

int_node* int_add_node_before(int data, int index, int prev_index, int_node* cur_node){
	if(prev_index == index){
		int_node* node = int_create_node(data, NULL);
		node->next = cur_node;
		return node;
	}
	
	if(cur_node->next == NULL)
	       	return NULL;

	prev_index++;
	return int_add_node_before(data, index, prev_index, cur_node->next);
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


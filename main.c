#include <stdio.h>
#include "linkedlist.h"

int main(){
	int_node* node1 = int_create_node(4, NULL);
	int_node* node2 = int_create_node(5, node1);
	int_node* node3 = int_create_node(6, node2);
	int_node* node4 = int_create_node(7, node3);
	int_node* node5 = int_create_node(9, node4);

	for(int i = 0; i < 5; i++)
	{
		int num = int_get_node(i, 0, node1);
		printf("%d ", num);
	}
	printf("\n");

	int_free_node(2, 0, node1);

	for(int i = 0; i < 4; i++)
	{
		int num = int_get_node(i, 0, node1);
		printf("%d ", num);
	}

	free(node1);
	free(node2);
	free(node4);
	free(node5);
}

#include <stdio.h>
#include "linkedlist.h"

int main(){
	int_ll* linkedlist = int_ll_create();
	int_node* node1 = int_ll_addnode_atend(linkedlist, 4);	
	int_node* node2 = int_ll_addnode_atend(linkedlist, 5);
	int_node* node3 = int_ll_addnode_atend(linkedlist, 6);
	int_node* node4 = int_ll_addnode_atend(linkedlist, 7);
	int_node* node5 = int_ll_addnode_atend(linkedlist, 9);
	
	printf("Mostrando todos los nodos\n");
	for(int i = 0; i < linkedlist->size ; i++)
	{
		int num = int_get_node(i, 0, node1);
		printf("%d ", num);
	}
	printf("\n\n");

	printf("Eliminando el nodo de indice 2\n");
	int_ll_freenode(linkedlist, 2);
	for(int i = 0; i < linkedlist->size; i++)
	{
		int num = int_get_node(i, 0, node1);
		printf("%d ", num);
	}
	printf("\n\n");

	printf("Agregando nodo despues del nodo de indice 2\n");
	int_node* node6 = int_ll_addnode_after(linkedlist, 1, 2);	
	
	for(int i = 0; i < linkedlist->size; i++)
	{
		int num = int_get_node(i, 0, node1);
		printf("%d ", num);
	}
	printf("\n\n");
	
	printf("Agregando nodo antes del nodo de indice 2\n");
	int_node* node7 = int_ll_addnode_before(linkedlist, 5, 2);
	for(int i = 0; i < linkedlist->size; i++)
	{
		int num = int_get_node(i, 0, node7);
		printf("%d ", num);
	}
	printf("\n\n");
}

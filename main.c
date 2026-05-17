#include <stdio.h>
#include "linkedlist.h"

int main(){
	int_node* node1 = int_create_node(4, NULL);
	int_node* node2 = int_create_node(5, node1);
	int_node* node3 = int_create_node(6, node2);
	int_node* node4 = int_create_node(7, node3);
	int_node* node5 = int_create_node(9, node4);

	printf("Mostrando todos los nodos\n");
	for(int i = 0; i < 5; i++)
	{
		int num = int_get_node(i, 0, node1);
		printf("%d ", num);
	}
	printf("\n\n");

	printf("Eliminando el nodo de indice 2\n");
	int_free_node(2, 0, node1);
	for(int i = 0; i < 4; i++)
	{
		int num = int_get_node(i, 0, node1);
		printf("%d ", num);
	}
	printf("\n\n");

	printf("Agregando nodo despues del nodo de indice 0\n");
	int_node* node6 = int_add_node_after(5, 0, 0, node1);	
	for(int i = 0; i < 5; i++)
	{
		int num = int_get_node(i, 0, node1);
		printf("%d ", num);
	}
	printf("\n\n");
	
	printf("Agregando nodo antes del nodo de indice 0\n");
	int_node* node7 = int_add_node_before(5, 0, 0, node1);
	for(int i = 0; i < 6; i++)
	{
		int num = int_get_node(i, 0, node7);
		printf("%d ", num);
	}
	printf("\n\n");

	free(node1);
	free(node2);
	free(node4);
	free(node5);
	free(node6);
	free(node7);
}

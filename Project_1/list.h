#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
	char* str;
	struct Node *next;
}Node;

typedef struct list
{
	Node *head;
	int size;

}list;

Node *create_node();
void destroy_node(Node *node);

/* Allocates and initializes a new list*/
list* create_list();

/*
   Adds item to end of the list. This function allocares a new buffer and copies 
   the string from item (use malloc, strlen, strncpy or strdup)
   Returns 0 if successful, non-zero otherwise.
*/
int add_to_list(list* ll, char* item);

/*
	Removes the string from the front of the list and returns a pointer to it. The caller
	is expected to free the string returned when finished with it.
*/
char* remove_from_list(list* ll);

/*
	prints every string in the list , with a new line character at the end
	of each string.
*/
void print_list(list *ll);

/*
	Clears the entire list and re-initializes the list. The passed pointer ll should
	still point to a valid , empty list when the function returns. Any memory allocated
	to store items in the list should be freed.
*/
void flush_list(list* ll);

/*
	De-allocated all data for the list. Ensure all memory allocated for this list is freed, including any
	allocated strings and the list itself.
*/
void free_list(list *ll);

void reset_head_val(list * ll, char* item);

#endif
#include "list.h"

Node * create_node(char* item)
{
	Node *node = malloc(sizeof(Node));
	node->str = item;
	node->next = NULL;

	return node;
}

void destroy_node(Node *node)
{
	free(node);
}


list* create_list(char* first_element)
{
	list *new_list = malloc(sizeof(new_list));
	Node *new_node = create_node(first_element);
	new_list->head = new_node;
	new_list->size = 1;

	return new_list;
	
}

int add_to_list(list *ll, char* item)
{
	Node *current = ll->head;

	while(current->next != NULL)
	{
		current = current->next;
	}

	current->str = item;
	current->next = create_node("");
	ll->size = ll->size + 1;

	return 0;
}

char* remove_from_list(list* ll)
{
	Node * current = ll->head;
	ll->head = ll->head->next;
	char* retrieve = current->str;
	destroy_node(current);
	ll->size = ll->size-1;
	return retrieve;

}

void print_list(list* ll)
{
	Node * current = ll->head;

	if(current->next == NULL)
	{
		printf("%s\n", current->str);
	}
	
	else
	{
		while(current!= NULL)
		{
			printf("%s\n", current->str);
			current = current->next;
		}
	}

	
}


void free_list(list* ll)
{
	Node * current = ll->head;
	
	while(current != NULL)
	{
		Node * destroy = current;
		current = current->next;
		destroy_node(destroy);
	}
}

void flush_list(list *ll)
{
	Node * current = ll->head->next;

	int i = 1;

	

	for(i; i < ll->size; i++)
	{
		
		Node * destroy = current;
		current = current->next;
		destroy_node(destroy);
		
		
	}

	ll->head->str = "";
	ll->head->next = NULL;

}

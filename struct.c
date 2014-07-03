#include <stdio.h>
#include <stdlib.h>

struct node
{
	int x;
	struct node *next;
};

void check_x(struct node*n)
{
	while (n->next != NULL)
	{
		printf("%d\n", n->x);
		n = n->next;
	}
}

struct node * create_node(int cnt, struct node *nxt)
{
	struct node *new_node;

	new_node = (struct node *) malloc(1 * sizeof(struct node));

	new_node->x = cnt;
	new_node->next = nxt;

	return new_node;
}

/* Adds a new node to the front of the list
   @newnode: the new node to be added
   @list: The list to which a node is added */

struct node *add_to_front(struct node *new_node, struct node *list)
{

	// Have the node pointing to the start of the list
	new_node->next = list;

	// Make new node the head of our list
	list = new_node;
}

int main(int argc, const char *argv[])
{
	struct node *list_start = NULL;
	
	list_start = create_node(4, NULL);
	list_start = add_to_front(create_node(60, list_start), list_start);

	print_list(list_start);
	
	return 0;
}

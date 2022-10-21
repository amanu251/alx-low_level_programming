#include <stdlib.h>
#include <stdio.h>

/**
 * Printlist - prints the given value
 * @h- head
 *
 * Return: 
 */
struct node {
	int value;
	struct node* next;
	};
typedef struct node node_t;
void printlist(node_t *head)
{
	node_t *temp = head;

	while (temp != NULL)
	{
		printf("%d - ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

int main(void)
{
	node_t n1, n2, n3;
	node_t *head;
	
	head = &n3;
	n1.value = 22;
	n2.value = 34;
	n3.value = 45;

	n3.next = &n2;
	n2.next = &n1;
	n1.next = NULL;
	printlist(head);

	return (0);
}

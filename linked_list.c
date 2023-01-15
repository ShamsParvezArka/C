#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *link;
} node;
node *head;

void print_linked_list(node *n) {
	head = n;
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->link;
	}
}

int main() {
	node *first  = (node*) malloc(sizeof(node));
	node *second = (node*) malloc(sizeof(node));
	node *third  = (node*) malloc(sizeof(node));

	first->data = 69;
	first->link = second;
	second->data = 420;
	second->link = third;
	third->data = 72;
	third->link = NULL;

	head = (node*) malloc(sizeof(node));
	print_linked_list(first);
	return 0;
}

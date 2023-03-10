#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *link;
} node;

node *head;

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

	head = first;
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->link;
	}

	return 0;
}

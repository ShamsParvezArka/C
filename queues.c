#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *link;
} node;

node *head, *tmp, *new_node;

void push(int data) {
	new_node = (node*) malloc(sizeof(node));
	new_node->data = data;
	new_node->link = head;
	head = new_node;
}

int delete(void) {
	tmp = head;
	while (tmp->link->link != NULL) {
		tmp = head->link;
	}
	int x = tmp->link->data;
	free(tmp->link);
	tmp->link = NULL;
	return x;
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

	head = first;
	printf("%d ", delete());
	//while (head != NULL) {
	//	printf("%d ", head->data);
	//	head = head->link;
	//}

	return 0;
}

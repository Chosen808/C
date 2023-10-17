#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<time.h>

typedef struct node {
	int   _value;
    struct node *_next;
}node;

typedef node* list;

node*list_create_node(int value) {
	node* ptr = malloc(sizeof(node));
	//check if null
	if (ptr) {
		ptr->_value = value;
		ptr->_next = NULL;
	}
	else {
		assert(ptr);
	}

	return ptr;
}
int  list_count(node *head) {
	int counter = 0;
	while (head != NULL)
	{
		++counter;
		head = head->_next;
	}
	return counter;
}
node*list_find(node *node,int value) {
	while (node != NULL) {
		if (node->_value == value)
			return node;
		node = node->_next;
	}
	return NULL;
}
void list_insert(node *head,int value) {
	int s = list_count(head);
	//start from 1 as the head already exists
	for (int i = 1; i < s; ++i) {
		head = head->_next;
	}
	head->_next = list_create_node(value);
}
void list_insert_at(node* head,int value,int index){
	node* temp;
	for (int i = 1; i < index; ++i) {
		head = head->_next;
	}
	temp = head->_next;
	head->_next = list_create_node(value);
	head->_next->_next = temp;
}
void list_delete(node* head,node* hex) {
	while (head != NULL) {
		if (head->_next == hex) {
			node* temp = head->_next->_next;
			free(head->_next);
			head->_next = temp;
		}
		head = head->_next;
	}
}
void list_print(node *head,int batch) {
	int counter = 0;
	while ( head != NULL) {
		printf("%3d ->", head->_value);
		head = head->_next;
		++counter;
		if (counter % batch == 0)
			printf("\n");
	}
	printf("NULL\n");
}

//sorting algorithims

//naive bubblesort Complexity:O(n^2)


void bubble_sort(node* head, int count) {

	if (count == 0 || count == 1)
		return;

	node* ptr_j=head;
	for (int i = 0; i < count-1; ++i) {
		for (int j = 0; j < count - i -1; j++) {
			
			if (ptr_j->_value > ptr_j->_next->_value)
			{
				//swap
				int temp = ptr_j->_value;
				ptr_j->_value = ptr_j->_next->_value;
				ptr_j->_next->_value = temp;
				//point to next node
				ptr_j = ptr_j->_next;
			}
			else
			 ptr_j = ptr_j->_next;
		}
		//point to head
		ptr_j = head;
	}
}
int random(int min, int max) {
	//generate randoms between min and max
	return rand() % (max + 1 - (min + 1)) + (min +1);
}
int main() {
	srand(time(0));
	int min = 0, max = 100;
	list slist=list_create_node(random(min,max));
	for (int i = 0; i < 99; ++i)
		list_insert(slist, random(min, max));
	list_print(slist,5);
	printf("___________________________________\n");
	bubble_sort(slist, list_count(slist));
	list_print(slist, 5);
	//return 0;
}
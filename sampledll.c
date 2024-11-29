#include<stdio.h>
#include<stdlib.h> 

struct Node {
	int data;
	struct Node *Llink;
	struct Node *Rlink;

};
struct Node *header = NULL;

struct Node *CreateNode(int data) {
	struct Node *newnode;
	newnode = malloc(sizeof(struct Node));
	newnode->Rlink = NULL;
	newnode->data = data;
	newnode->Llink = NULL;
};

void insertAtFront(int data) {
	struct Node *newnode;
	if(header == NULL) {
		newnode = CreateNode(data);
		header = newNode;
	}
	else {
		newnode = CreateNode(data);
		newnode->Llink = NULL;
		newnode->Rlink = header;
		header->Llink = newnode;
		header = newnode;
	}

}

void insertAtEnd(int data) {
	struct Node *newnode = CreateNode(data);
	struct Node *ptr = header;
	if(header == NULL) {
		newnode = CreateNode(data);
		header = newnode;
	}
	else {
		while(ptr-> Rlink != NULL) {
			
		}
	}

}

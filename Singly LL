//Created List and Displayed them.
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
struct node {
	int data;
	struct node *next;
};

typedef struct node Node;

//creates node
Node *createNode(int val) {
	Node *newnode=malloc(sizeof(Node));
	newnode->data=val;
	newnode->next=NULL;
	return newnode;
}

//creates list of nodes 
Node *createList(uint64_t n){
	int val;
	Node *head=(Node*)(n);//--to ignore warning--casting int value to 64 bit adress pointer Node to store the adress in head pointer compatibly.
	if(head==NULL) {
	    
	    printf("\nPls Enter the list...");
		return 0;
	}
	else {
		printf("Enter value to new node: ");
		scanf("%d",&val);

		Node *fnode=createNode(val);// node -1
		Node *temp=fnode;

//start creating from node 2
		for(int i=2; i<=n; i++) {
			printf("Enter value to new node: ");
			scanf("%d",&val);
			Node *newnode=createNode(val);
			temp->next=newnode;
			temp=temp->next;

		}
		return fnode;
	}

}

int printLL(Node *head) {
//check for empty 
	if(head==NULL){
		return 0;
	}
	else {
		printf("\nDisplaying list:\n");
		while(head!=NULL) {
			printf("%d -> ",head->data);
			head=head->next;

		}
		//  printf("\b\b\b\b");
		printf("NULL");


	}

}
void printTailnode(Node *head) {
	while(head->next!=NULL) {
		head=head->next;
	}
	printf("\nTail Node: %d",head->data);
}

int main()
{
	int n;
	printf("Enter the number of nodes you want to create: ");
	scanf("%d",&n);
	Node *head=createList(n);
	printLL(head);

	printf("\nHead Node: %d",head->data);//printing head node
	printTailnode(head);
	// head=createNode(2);
	// printf("%d",head->data);
}

//Created Doubly Linked List and Displayed them
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
struct node {
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node Node;

Node *createNode(int val) {
	Node *newnode=malloc(sizeof(Node));
	newnode->data=val;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}

Node *createList(uint64_t n) {
	int val;
	Node *head=(Node*)(n);//--to ignore warning--casting int value to 64 bit adress pointer Node to store the adress in head pointer compatibly.
	if(head==NULL) {

		printf("\nPls Enter the list...");
		return 0;
	}
	else {
		printf("Enter value to new node: ");
		scanf("%d",&val);

		Node *fnode=createNode(val);
		Node *temp=fnode;

		for(int i=2; i<=n; i++) {
			printf("Enter value to new node: ");
			scanf("%d",&val);
			Node *newnode=createNode(val);
			temp->next=newnode;
			newnode->prev=temp->next;
			temp=temp->next;

		}
		return fnode;
	}

}

int printLL(Node *head) {
	//check for empty
	if(head==NULL) {
		return 0;
	}
	else {
		printf("\nDisplaying list:\n");
        printf("NULL");
		while(head!=NULL) {

			printf(" <- %d -> ",head->data);
			head=head->next;

		}

		printf("NULL");
	}

}


int main()
{
	int n;
	printf("Enter the number of nodes you want to create: ");
	scanf("%d",&n);
	Node *head=createList(n);
	printLL(head);
	
	
// 	Node *temp=head;
// 	printf("%u %d %u",head->prev,head->data,head->next);
// 	printf("\n%u %d %u",temp->next->prev,temp->next->data,temp->next->next);
// 	printf("\n%d %d %d",temp->next->next->prev,temp->next->next->data,temp->next->next->next);
	
	


}

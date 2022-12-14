#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            #include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void LinkedListTraversal(struct Node * ptr )
{
	while(ptr!=NULL)
	{
	    printf("Element : %d\n",ptr->data);
		ptr=ptr->next;	
	}
}

// Case 1 : Insertion at first
struct Node * InsertAtFirst(struct Node * head, int data)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	
	ptr->next=head;
	return ptr;
}

// Case 2 : Insertion in between
struct Node * InsertInBetween(struct Node * head, int data,int index)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node *p=head;
	int i=0;
	
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
		ptr->next=p->next;
		p->next=ptr;
		
		return head;
}


// Case 3 : Insertion At the End
struct Node * InsertAtEnd(struct Node * head, int data)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node *p=head;
	
	while(p->next!=NULL)
	{
		p=p->next;
		
	}
	p->next=ptr;
	ptr->next=NULL;
	
	return head;
	

}

// Case 4 : Insertion after the Node
struct Node * InsertAfterNode(struct Node * head, struct Node * PrevNode, int data)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	
	
	ptr->next=PrevNode->next;
	PrevNode->next=ptr;
	
	return head;
}

int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;

	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));

	
	head->data=9;
	head->next=second;
	
	second->data=19;
	second->next=third;
	
	third->data=90;
	third->next=fourth;
	
	fourth->data=87;
	fourth->next=NULL;  
	
	printf("The Linked List before Insertion\n");
	LinkedListTraversal(head);
	
	//head = InsertAtFirst(head,65);
	//head = InsertInBetween(head,65,3);
	//head = InsertAtEnd(head,65);
	head = InsertAfterNode(head,second,65);
	printf("\nThe Linked List after Insertion\n");
	LinkedListTraversal(head);
	return 0;
}

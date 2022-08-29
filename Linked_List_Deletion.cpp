#include<stdio.h>
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

// Case 1 : Deletion At First
struct Node * DeletionAtFirst(struct Node* head)
{
	struct Node * p=head;
	head=head->next;
	free(p);
	return head;
}

// Case 2 :  Deletion At Given Index 
struct Node * DeletionAtGivenIndex(struct Node* head,int index)
{
	struct Node * p=head;
	struct Node * q=head->next;
	for(int i=0;i<index-1;i++)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}

// Case 3 : Deletion At The End
struct Node * DeletionAtTheEnd(struct Node* head)
{
	struct Node * p=head;
	struct Node * q=head->next;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}

// Case 4 : Deletion At a Given Value
struct Node * DeletionAtaGivenValue(struct Node* head,int value)
{
	struct Node * p=head;
	struct Node * q=head->next;
	while(q->data!=value && q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	
	if(q->data==value)
	{
	
	p->next=q->next;
	free(q);
	}
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
	fourth->next=NULL;
	
	printf("Linked List before deletion\n");
	LinkedListTraversal(head);
	
//	head = DeletionAtFirst(head);
//	head = DeletionAtGivenIndex(head, 3);
//	head=DeletionAtTheEnd(head);
	head=DeletionAtaGivenValue(head,90);
	printf("\nLinked List after deletion\n");
	LinkedListTraversal(head);
	
	return 0;
}

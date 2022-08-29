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

int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	struct Node *fifth;
	struct Node *sixth;
	struct Node *seventh;
	
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));
	fifth=(struct Node *)malloc(sizeof(struct Node));
	sixth=(struct Node *)malloc(sizeof(struct Node));
	seventh=(struct Node *)malloc(sizeof(struct Node));
	
	head->data=9;
	head->next=second;
	
	second->data=19;
	second->next=third;
	
	third->data=90;
	third->next=fourth;
	
	fourth->data=87;
	fourth->next=fifth;
	
	fifth->data=12;
	fifth->next=sixth;
	
	sixth->data=67;
	sixth->next=seventh;
	
	seventh->data=45;
	seventh->next= NULL;
	
	LinkedListTraversal(head);
	
	return 0;
}

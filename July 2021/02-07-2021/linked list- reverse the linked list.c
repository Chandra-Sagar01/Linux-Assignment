//linked list- reverse the linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

typedef struct node* NODE;
NODE head = NULL;
NODE traverse = NULL;

void insert_front(int item)
{
	NODE temp = NULL;
	temp = (NODE)malloc(1*sizeof(struct node));
	if(temp == NULL)
	{
		printf("Memory not allocated!!");
		exit(1);
	}
	temp->data = item;
	if(head == NULL)
	{
		temp->link = NULL;
		printf("The first node is created\n");
	}
	else
	{
		temp->link = head; 
	}
	head = temp;
}

void display()
{
	traverse = head;
	printf("Created list: ");
	while(traverse != NULL)
	{
		printf("%d ",traverse->data);
		traverse = traverse->link;
	}
}

void reverse_display()
{
	NODE prev = head, current = head, next = head;
	while(next != NULL)
	{
		prev = current;
		current = next;
		next = current->link;
		current->link = prev;	
	}
	head->link = NULL;
	head = current;
	printf("\nReverse list:");
	display();
}
int main()
{
	insert_front(10);
	insert_front(20);
	insert_front(30);
	insert_front(40);

	display();
	reverse_display();
 
}
/*Output:
The first node is created
Created list: 40 30 20 10
Reverse list:Created list: 10 20 30 40
*/
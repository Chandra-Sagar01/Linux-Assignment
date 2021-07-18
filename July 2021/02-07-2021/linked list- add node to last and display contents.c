//linked list- insert node at the end and display contents
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

typedef struct node* NODE;
NODE head = NULL;
NODE tail = NULL;

void insert_last(int item)
{
	NODE temp = NULL;
	temp = (NODE)malloc(1*sizeof(struct node));
	if(temp == NULL)
	{
		printf("Memory not allocated!!");
		exit(1);
	}
	temp->data = item;
	temp->link = NULL;
	if(head == NULL)
	{		
		printf("The first node is created\n");
		head = temp;
	}
	else
	{
		tail->link = temp;
	}
	tail = temp;
}

int main()
{
	insert_last(10);
	insert_last(20);
	insert_last(30);
	insert_last(40);
	
	NODE traverse = head;
	while(traverse != NULL)
	{
		printf("%d ",traverse->data);
		traverse = traverse->link;
	}
}
/*Output:
The first node is created
10 20 30 40
*/
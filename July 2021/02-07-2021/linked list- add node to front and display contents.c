//linked list- add node to front and display contents
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

typedef struct node* NODE;
NODE head = NULL;

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

int main()
{
	insert_front(10);
	insert_front(20);
	insert_front(30);
	insert_front(40);
	
	NODE traverse = head;   //for traversring, so head always points to first node
	while(traverse != NULL)
	{
		printf("%d ",traverse->data);
		traverse = traverse->link;
	}
}
/*Output:
The first node is created
40 30 20 10
*/

/* insert_front() can also be written as:
NODE insert_front(int item)
{
	NODE temp = (NODE)malloc(1*sizeof(struct node));
	if(temp == NULL)
	{
		printf("Memory not allocated!!");
		exit(1);
	}
	temp->data = item;    
	temp->link = head;     //in case head = NULL then we are creating first node
						  //then temp->link = NULL
	head = temp;
}
*/